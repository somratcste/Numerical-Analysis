#include<iostream>
#include<cmath>
using namespace std;

class simp{
    float x[10],y[10],sum=0,h,temp;
    int i,n,j,k=0;
    float fact(int);
  public:
    int get();
    int show();
};

int simp::get()
{
    cout<<"\nhow many record you will be enter: ";
  cin>>n;
  for(i=0; i<n; i++)
  {
   cout<<"\n\nenter the value of x"<<i<<" ";
   cin>>x[i];
   cout<<"\n\nenter the value of f(x"<<i<<") ";
   cin>>y[i];
  }
  h=x[1]-x[0];
  n=n-1;
  sum = sum + y[0];
  for(i=1;i<n;i++)
  {
    if(k==0)
    {
     sum = sum + 4 * y[i];
     k=1;
    }
    else
    {
     sum = sum + 2 * y[i];
     k=0;
    }
   }
   sum = sum + y[i];
   sum = sum * (h/3);
}

int simp::show()
{
    cout<<"\n\n  I ="<<sum;
}
int main()
{

  simp ob;
  ob.get();
  ob.show();
  return 0;
}

