#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("Pling");
        c++;
    }
    if(a%5==0)
    {
        printf("Plang");
        c++;
    }
    if(a%7==0)
    {
        printf("Plong");
        c++;
    }
    if(c==0)
    {
        printf("%d",a);
    }
}