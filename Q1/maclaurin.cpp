#include <iostream>
#include <cmath>
using namespace std;
double power(int f)
{
    int i,j=f,t=1;
    for(i=1;i<=j;i++){
      t=t*f;
          }
        return t;
}
double fact(int f)
{
    int i,j=f,t=1;
    for(i=j;i>=1;i--){
     t=t*i;
    }
    return t;
}
int main()
{
    double i,j,q=0.0,e,k,l;
  cout<<"Truncted after the term: ";
  cin>>i;
  cout<<"what's values maclaurin series : ";
  cin>>j;
   if(i==1)
   cout<<"result is 1"<<endl;
   else if(i==2)
   cout<<"result is "<<1+j<<endl;
   else
   {
     for(l=3;l<=i;l++)
     {
        q+=power(j)/fact(j);
     }
     q+=1+j;
     cout<<"Result is : "<<q;
   }
}
