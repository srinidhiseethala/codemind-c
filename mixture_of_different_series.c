#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=1,y=1,i,a,b;
    printf("0 0 ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        if(i%2!=0)
        {
            a=pow(3,x)-1;
            printf("%d ",a);
            x++;
        }
        else
        {
            b=pow(2,y)-1;
            printf("%d ",b);
            y++;
        }
    }
}