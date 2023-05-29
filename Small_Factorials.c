#include<stdio.h>
int main()
{
    int t,i,j,c=1;
    scanf("%d",&t); 
    int a[t]; 
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        c=1;
        for(j=1;j<=a[i];j++)
        {
            c=c*j;
        }
        printf("%d
",c);
    } 
}