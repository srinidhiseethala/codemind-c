#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  float j;
  scanf("%d",&n);
  j=sqrt((double)n);
  i=j;
  if(i==j)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
}