#include <stdio.h>
int addDigits(int num);
int main() {
    int num;
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.
");
    } else {
        int result = addDigits(num);
        printf("%d
", result);
    }
    return 0;
}
int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}