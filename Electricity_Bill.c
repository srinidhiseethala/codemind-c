#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float c,b,d,t;
    if(n<=199)
    {
        c=1.20;
    }
    else if(n>=200&&n<400)
    {
        c=1.40;
    }
    else if(n>=400&&n<600)
    {
        c=1.60;
    }
    else if(n>=600&&n<800)
    {
        c=1.80;
    }
    else if(n>=800)
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        d=0.15*b;
    }
    else
    {
        d=0.0;
    }
    t=d+b;
    printf("Units Consumed: %d
",n);
    printf("Cost per Unit: %0.2f
",c);
    printf("Bill: %0.2f
",b);
    printf("Surcharge: %0.2f
",d);
    printf("Total Amount: %0.2f",t);
}