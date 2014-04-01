#include <iostream>
using namespace std;
int main()
{
    int a[10][10],m,n,i,j;
    cout<<"Number of rows : ";
    cin>>m;
    cout<<"Number of columns : ";
    cin>>n;
    cout<<"pls input your desired matrix is : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          cin>>a[i][j];
        }
    }
    cout<<"Your Desired matrix is : "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix upper form : "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }

    cout<<"Matrix lower form : "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }

    cout<<"Matrix diagonal form : "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }
}
