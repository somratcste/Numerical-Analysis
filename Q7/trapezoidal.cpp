#include<iostream>
#include<cmath>
using namespace std;

class trap{
    int n, k;
    double a,b,f,h, integral, sum;
public:
   double func(double v)
   {
       f= 24.6/(v-0.065)-5.5/pow(v,2);
       return f;
   }
   void integration();
};

int main()
{
    trap ob;
    ob.integration();

}
void trap::integration()
{
    cout<<"Enter lower and upper limit";
    cin>>a>>b;
    cout<<endl<<"Enter number of segment you want";
    cin>>n;
    h=(b-a)/n;
    sum = 0.0;
    for(k=1;k<n;k++)
    {
        sum += func(a+k*h);
    }
    integral = (h/2.0)*(func(a)+ 2.0*sum + func(b) );
    cout<<endl<<"Integral = "<<integral<<endl;
}

