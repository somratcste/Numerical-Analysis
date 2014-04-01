#include<iostream>
#include<cmath>
using namespace std;
int main () {
    double x,t,z,l=0,s=0;
    int i = 3, j = 1, n = 0;
    cout<<"enter the initial value of x :";
    cin>>x;
    cout<<endl;
    cout<<"\tn"<<"\tx"<<"\tf(x)"<<"\tx++"<<endl;
    for (;;) {
        double y,y1=0;
        y = pow (x,i)-2*pow(x,j)-5;
        z=x;
        if (y == 0 || (l-s) == 0.005)
        {
            cout<<"Root of the nonlinear equation : "<< l<<endl;
            break;
        }
        else {
            z=x;
            y1 = i*pow(x,i-1)-2*pow(x,j-1);
            cout<<"\t"<<n<<"\t"<<x<<"\t"<<y<<"\t";
            x=x-y/y1;
            t=x;
            cout<<t<<endl;
            n++;
            if (t==z)
            {
                cout<<"\nRoot of the nonlinear equation : "<<t<<endl;
                break;
            }
            else {
                if(z>t) {
                    l=z;
                    s=t;
                }
                else {
                    l=t;
                    s=z;
                }
            }
        }

    }
    return 0;
}
