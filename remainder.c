#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter the dividend (num1): ");
    scanf("%d", &num1);

    printf("Enter the divisor (num2): ");
    scanf("%d", &num2);

    remainder = num1 % num2;
    printf("Remainder = %d\n", remainder);


    return 0;
}

