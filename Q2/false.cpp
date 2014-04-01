#include <stdio.h>
int main()
{
    double a=0, b=0,n,x1,fa,fb,p,q;
    int i,j=1;
    n=i*i*i-2*i-5;

    for(i=-20;;i++)
    {
      n=i*i*i-2*i-5;
      if(n<0)
       a=i;
       else if(n>0)
       b=i;
       if(a!=0&&b!=0)
       break;
    }
    printf("Interval of the eqution is: \n");
    printf("a=%lf and b=%lf \n", a,b);
    printf("\nn\t a\t\t b\t\t x1\t\t f(x)\n");
    printf("---------------------------------------------------------------\n");
    while(1){
    fa=a*a*a-2*a-5;
    fb=b*b*b-2*b-5;
    x1=(a*fb-b*fa)/(fb-fa);
    n=x1*x1*x1-2*x1-5;
    printf("%d\t %lf\t %lf\t %lf\t %lf\n", j++,a,b,x1,n );
    if(n>0)
    {
     p=b;
     b=x1;
    }
    else if(n<0){
        q=a;
        a=x1;
    }
    if(a==q||b==p)
    break;
    }
}
