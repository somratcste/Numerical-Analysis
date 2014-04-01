#include<iostream>
#include<cmath>
using namespace std;

class gauss{
    int i,j,k,n;
    double eps, ratio, sum, *x, **a;
public:
    int gauss_input();
    int gauss_elimination();
    int gauss_output();

    ~gauss()
    {
        delete[] x;
        for(i=0; i<n; i++) {delete [] a [i];}
        delete [] a;
    }
};

int main()
{
    gauss solution;
    solution.gauss_input();
    solution.gauss_output();
}

int gauss::gauss_input()
{
    cout<<"Enter number of equation: ";
    cin>>n;
    x= new double[n];
    a= new double*[n];
    for(i=0;i<n; i++)
    {
        a[i]= new double [n+1];
    }
     for(i=0;i<n; i++)
         for(j=0;j<n; j++)
     {
         cout<<"\nEnter a ["<<i<<"]["<<j<<"] ";
         cin>> a [i][j];
     }
     for(i=0;i<n;i++)
     {
         cout<<"\nEnter b["<<i<<"]= ";
         cin>>a[i][n];
     }
     cout<<"\nEnter minimum pivot element";
     cin>>eps;

}

int gauss::gauss_elimination()
{
    for(k=0;k<(n-1);k++)
    {
        for(i=(k+1); i<n; i++)
        {
            if(fabs(a[k][k])<eps)
            {
                cout<<"\nPivot element too small. aborting......"<<endl;
                break;
            }
            ratio = a[i][k]/a[k][k];
            for(j=(k+1);j<(n+1);j++)
            {
                a[i][j] -= ratio*a[k][j];
            }
            a[i][k] =0;
        }
    }
    x[n-1]= a[n-1][n]/a[n-1][n-1];
    for(i=(n-2);i>=0;i--)
    {
        sum = 0.0;
        for(j=(i+1);j<n;j++)
        {
            sum += a[i][j]*x[j];
        }
        x[i]=(a[i][n]-sum)/a[i][i];
    }
}

int gauss::gauss_output()
{
    cout<<"\n The solution is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\nx ["<<i<<"] = "<<x[i]<<endl;
    }
}
