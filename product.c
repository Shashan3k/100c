#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the first %d natural numbers is %d\n", n, product);

    return 0;
}
