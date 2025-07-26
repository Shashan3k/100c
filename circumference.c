#include <stdio.h>

#define PI 3.14

int main() {
    float r, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    circumference = 2 * PI * r;

    printf("Circumference of the circle is: %.2f\n", circumference);

    return 0;
}
