#include <iostream>
using namespace std;
int main()
{
    int a[10][10],m,n,i,j;
    cout<<"Your sqpure matrix is : "<<endl;
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
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

         cout<<"Your transpose matrix is : "<<endl;
         for(j=0;j<n;j++)
        {
            for(i=0;i<m;i++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

}
