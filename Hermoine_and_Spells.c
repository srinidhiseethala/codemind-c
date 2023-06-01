#include<stdio.h>
int main()
{
    int x,y,z; 
    scanf("%d%d%d",&x,&y,&z); 
    if(x>z && y>x)
    {
        printf("%d",x+y);
    }
    else if(y>x && z>x) 
    {
        printf("%d",y+z);
    }
    else 
    {
        printf("%d",z+x); 
    }
}