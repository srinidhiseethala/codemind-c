#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,ar,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",ar);
}