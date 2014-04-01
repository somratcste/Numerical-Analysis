#include <iostream>
using namespace std;
int main()
{
    double a[10],b[10],value,h,f,l,evensum=0.0,oddsum=0.0;
    int i,m;
    cout<<"Input number of data points : "<<endl;
    cin>>m;
    cout<<"nput table values, set by set : "<<endl;
    for(i=0;i<m;i++)
    cin>>a[i]>>b[i];
    cout<<"Initial value of x : "<<endl;
    cin>>f;
    cout<<"Final value of x : "<<endl;
    cin>>l;
    //cout<<"What is the segment width? "<<endl;
    //cin>>h;
    h=a[1]-a[0];
    for(i=1;i<m-1;i++)
    {
        if(i%2==0)
       evensum+=b[i];
       else
       oddsum+=b[i];
    }
    value=(h/3)*(b[0]+4*oddsum+2*evensum+b[m-1]);
    cout<<"Integral from "<<f<<" to "<<l<<" is : "<<value<<endl;
    return 0;

}

