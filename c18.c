#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent;
    int result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = (int)pow(base, exponent); 

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
