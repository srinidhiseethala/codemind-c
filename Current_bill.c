#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
float c,b,sc,t;
if(n<=199)
{
c=1.20;
}
else if(n>=200&&n<400)
{
c=1.50;
}
else if(n>=400&&n<600)
{
c=1.80;
}
else if (n>600)
{
c=2.00;
}
b=n*c;
if(b>400)
{
sc=0.15*b;
}
else
{
sc=100;
}
t=sc+b;
printf("%0.2f",t);
}