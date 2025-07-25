#include <stdio.h>

int main() {
    int num1, num2, num3, A;
    int average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    A=num1 + num2 + num3;
    average = A / 3;

    printf("Average = %d\n", average);

    return 0;
}