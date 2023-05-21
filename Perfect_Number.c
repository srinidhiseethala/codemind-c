#include <stdio.h>
int isPerfectNumber(int num);
int main()
{
    int num;
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Invalid input. Please enter a positive integer.
");
        return 0;
    }
    if (isPerfectNumber(num)) 
    {
        printf("True");
    } 
    else 
    {
        printf("False");
    }
    return 0;
}
int isPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}