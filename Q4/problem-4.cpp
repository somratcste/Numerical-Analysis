#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,d=0;
    double b[10][10];
    cout<<"Your square matrix is : "<<endl;
    cin>>m;
    n=m;
    if(m==2)
    {


           cout<<"Input Your desired matrix2"<<endl;
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
        cout<<endl<<"Your square matrix is : "<<endl;
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<'\t'<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        //find out determinant

        d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
        cout<<endl<<"determinant is : "<<d<<endl;

        //transpose of a matrix

         cout<<endl<<"Your transpose matrix is : "<<endl;
         for(j=0;j<n;j++)
        {
            for(i=0;i<m;i++)
            {
                cout<<'\t'<<a[i][j]<<" ";
            }
            cout<<endl;
        }


        //adjoint of a matrix

        b[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
             b[0][1]=-(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
              b[0][2]=(a[1][0]*a[2][1]-a[2][0]*a[1][1]);

            b[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
             b[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
              b[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

            b[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
             b[2][1]=-(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
              b[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);

           cout<<endl<<"Your adjoint matrix is : "<<endl;
             for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                {
                    cout<<'\t'<<b[i][j]<<" ";
                }
                cout<<endl;
            }


          //inverse of a matrix is

          cout<<endl<<"Your inverse matrix is : "<<endl;
             for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                {
                    cout<<'\t'<<b[i][j]/d<<" ";
                }
                cout<<endl;
            }


        return 0;
    }
}

