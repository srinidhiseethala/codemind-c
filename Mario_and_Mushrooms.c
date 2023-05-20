#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n%3;
    if(m==0)
    {
        printf("NORMAL");
    }
    else if(m==2)
    {
        printf("SMALL");
    }
    else
    {
        printf("HUGE");
    }
}