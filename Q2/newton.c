#include<stdio.h>
#include<math.h>
#define EPS 0.000001
#define max 20
#define f(x) x*sin(x)+cos(x)
#define fd(x) x*cos(x)

main()
{
    int  count;
    float x0,xn,fx,fdx,f0;
    printf("\n");
    printf("Please Enter starting values: ");
    scanf("%f", &x0);
    printf("\n");
    printf("Solution by Newton-raphson method: \n");
    printf("\n");

    count=1;

    start:
    f0=f(x0);
    fdx=fd(x0);
    xn=x0-fx/fdx;
    if(fabs((xn-x0)/xn)<EPS)
    {
    printf("\n");
    printf("Root = %f\n", xn);
    printf("f(root)= %f", f(xn));
    printf("\n No of iteratsion= %d\n", count);
    printf("\n");
    }
    else
    {
        x0=xn;
        count=count+1;
        if(count<max)
        {
            goto start;
        }
        else
        {
            printf("Solution doesnot Coverage \n");
            printf("In %d iteratiion \n", max);
        }
    }
}
