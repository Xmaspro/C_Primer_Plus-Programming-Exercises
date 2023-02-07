#include <stdio.h>
double harmonic_mean(double, double);

int main(void)
{
    double a, b;
    int response;
    printf("Enter two numbers: ");
    response = scanf("%lf %lf", &a, &b);
    while (response == 2) {
        printf("The harmonic mean of %.2f and %.2f is %.2f\n", a, b, harmonic_mean(a, b));
        break;
    }

    printf("Thanks for using this program!\n");
    return 0;
}

double harmonic_mean(double x, double y) {
    return 1.0 / ((1.0 / x + 1.0 / y) / 2.0);
}
















// {
//     double data1, data2;
//     printf("Enter two float number:\n");
//     scanf("%lf %lf", &data1, &data2);

//     printf("The Harmean of %lf and %lf is %lf.\n", data1, data2, harmean(data1, data2));


//     return 0;
// }


// double harmean(double m, double n)
// {
//     return 1/((1/m + 1/n)/2);
// }
