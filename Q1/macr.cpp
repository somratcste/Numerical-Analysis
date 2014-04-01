#include<iostream>
#include<cmath>
using namespace std;

int fact(int y)
{
    if (y!=1)
        return y*fact(y-1);
}
int main () {
    int i;
    double x;
    cout<<"when the series is terminated"<<endl;
    cin>>i;
    cout<<"enter the value of x :"<<endl;
    cin>>x;
    if ( i==1) {
        cout<<"the value of series is : 1"<<endl;
    }
    else {
        double r,total;
        total = 1 ;
        for (int j =1;j<i;j++) {
            r = pow (x,j)/fact(j);
            total = total + r;

        }
        cout<<"The maclurin series value for "<<x<<" the "<<i<<" term is : "<< total<<endl;

    }
    return 0;

}
