#include <stdio.h>

int main() {
    int principal, rate, time, interest;

    printf("Enter Principal amount: ");
    scanf("%d", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%d", &rate);

    printf("Enter Time (in years): ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %d\n", interest);

    return 0;
}
