#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,d=0;
    double b[10][10];
    cout<<"Your square matrix is : "<<endl;
    cin>>m;
    n=m;


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


            b[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
             b[0][1]=-(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
              b[0][2]=(a[1][0]*a[2][1]-a[2][0]*a[1][1]);

            b[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
             b[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
              b[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

            b[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
             b[2][1]=-(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
              b[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);


          cout<<"Your cofactor matrix is : "<<endl;
             for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<'\t'<<b[i][j]<<" ";
                }
                cout<<endl;
            }

             cout<<"Your adjoint matrix is : "<<endl; // transpose of cofactor matrix:
             for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                {
                    cout<<'\t'<<b[i][j]<<" ";
                }
                cout<<endl;
            }

            cout<<"Your determinant is : "<<endl;
            d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
            cout<<d<<endl;

            cout<<"Your inverse matrix is : "<<endl;
             for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                {
                    cout<<'\t'<<b[i][j]/d<<" ";
                }
                cout<<endl;
            }

}

