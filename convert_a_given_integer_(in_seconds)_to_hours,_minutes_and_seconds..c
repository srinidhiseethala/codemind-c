#include<stdio.h>
int main()
{
    int sc,h,m,s;
    scanf("%d",&sc);
    h=sc/3600;
    m=(sc-(h*3600))/60;
    s=(sc-(h*3600))-(m*60);
    printf("H:M:S-%d:%d:%d
",h,m,s);
}