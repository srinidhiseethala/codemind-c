#include<stdio.h>
int main()
{
    int a,i,j=0,rem;
    scanf("%d",&a);
    for(i=1;a>i;i++)
    {
        rem=a%10;
        a=a/10;
        if(j<rem)
        {
            j=rem;
        }
    }
    printf("%d",j);
}