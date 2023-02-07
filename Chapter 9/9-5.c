#include <stdio.h>
#include <ctype.h>
void larger_of(double*, double*);

int main(void) {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("\nThe data is %.2f, %.2f\n", a, b);
    printf("The address is %p, %p\n", &a, &b);
    larger_of(&a, &b);
    printf("After transition, the data is %.2f, %.2f\n\n", a, b);

    return 0;
}

void larger_of(double* x, double* y)
{
    if (*x >= *y)
        *y = *x;
    else
        *x = *y;
}


