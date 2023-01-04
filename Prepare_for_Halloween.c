#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(2*x>5*y)
        {
            printf("Chocolate
");
        }
        else if(2*x<5*y)
        {
            printf("Candy
");
        }
        else
        {
            printf("Either
");
        }
    }
}