#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,k,d=0,c[10];
    double b[10][10],sum,v[10][10];
    cout<<"What is the size of the system : "<<endl;
    cin>>m;
    n=m;


           cout<<"Input coefficients  a(i , j), row-wise: "<<endl;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    cin>>a[i][j];
                }
            }

            cout<<"Input vector  b : "<<endl;

           for(i=0;i<m;i++)
                    cin>>c[i];


            b[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
             b[0][1]=-(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
              b[0][2]=(a[1][0]*a[2][1]-a[2][0]*a[1][1]);

            b[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
             b[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
              b[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

            b[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
             b[2][1]=-(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
              b[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);


            d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);

             for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                {
                    v[i][j]=b[i][j]/d;

                }
                cout<<endl;
            }

            cout<<"Solution of the system is : "<<endl;
          for(i=0;i<m;i++)
          {
              sum=0.0;
              for(j=0;j<n;j++)
              {
                       sum=sum+v[j][i]*c[j];
              }

            cout<<'\t'<<sum<<endl;

          }
          return 0;

}


