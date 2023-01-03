#include<stdio.h>
int main()
{
int n,x,y;
scanf("%d",&n);
while(n--)
{
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("LOSS
");
    }
    else if(x==y)
    {
        printf("NEUTRAL
");
    }
    else
    {
        printf("PROFIT
");
    }
}
}