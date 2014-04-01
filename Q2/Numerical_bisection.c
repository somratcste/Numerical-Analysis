#include<stdio.h>
int main()
{
    double a=0, b=0,n,av=0;
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
    printf("\nn\t a\t\t b\t\t av\t\t f(x)\n");
    printf("---------------------------------------------------------------\n");
    while(1){
    av=(a+b)/2;
    n=av*av*av-2*av-5;
    printf("%d\t %lf\t %lf\t %lf\t %lf\n", j++,a,b,av,n );
    if(n>0)
    {
     b=av;
    }
    else if(n<0)
    a=av;
    if((b-a)<0.001)
    break;
    }
}
