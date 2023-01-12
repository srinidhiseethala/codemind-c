#include<stdio.h>
int main()
{
    int s,t,b,c,C;
    scanf("%d%d%d",&s,&t,&b);
    c=2*512*s*t*b;
    C=c/1024;
    printf("%d KB",C);
}