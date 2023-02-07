#include <stdio.h>
#include <ctype.h>
void switch_val(double*, double*, double*);

int main(void) {
    double a, b, c;
    printf("Enter three number:");
    scanf("%lf %lf %lf", &a, &b, &c);
    switch_val(&a, &b, &c);

    printf("number after transition: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}

void switch_val(double* a1, double* a2, double* a3) {
    double temp;
    if (*a1 > *a2) {
        temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
    if (*a1 > *a3) {
        temp = *a1;
        *a1 = *a3;
        *a3 = temp;
    }
    if (*a2 > *a3) {
        temp = *a2;
        *a2 = *a3;
        *a3 = temp;
    }
}