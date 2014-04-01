#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,d=0;
    cout<<"Your square matrix is : "<<endl;
    cin>>m;
    n=m;
    if(m==2)
    {


           cout<<"Input Your desired matrix"<<endl;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    cin>>a[i][j];
                }
            }
            cout<<"Your square matrix is : "<<endl;
             for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }

            d = a[0][0]*a[1][1] - a[1][0]*a[0][1];

          cout<<"\nDeterminant of 2X2 matrix: "<<d<<endl;

          return 0;
    }

    if(m==3)
    {
         cout<<"Input Your desired matrix"<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Your square matrix is : "<<endl;
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<'\t'<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
        cout<<"determinant is : "<<d<<endl;
        return 0;
    }
}
