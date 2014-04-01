#include<iostream>
#include<cmath>>
using namespace std;

class gauss{
    int x[3],m;
    int a[3][3] ,b[3]={0};
public:
  gauss();
    int solution();
    void show();
};

 gauss::gauss()
{

    int n,i,j;
    cin>>n;
    m=n;
    cout<<"Input the equation:";
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    }
     for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" "<<"\n";
    }
}

int gauss::solution()
{
    int p=1,q=1;

    for(int i=1;i<=m;i++){

        x[m]=pow(b[m], m-1)/pow(a[m][m], m-1);
        cout<<x[m];
   }
}
int main()
{
    gauss ob;
    ob.solution();

    return 0;
}

