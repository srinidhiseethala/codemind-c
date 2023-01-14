#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c=b;
    b=a;
    a=c;
    printf("%d
%d",a,b);
}