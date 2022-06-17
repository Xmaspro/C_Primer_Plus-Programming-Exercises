#include <stdio.h>
double min(double, double);



int main(void)
{
    double data1, data2;
    int status = scanf("%lf %lf", &data1, &data2);

    printf("Enter two float number: ");
    printf("You input %.2f and %.2f. The min one is %.2f\n", data1, data2, min(data1, data2));

    return 0;
}


double min(double x, double y)
{
    return (x > y)? y : x;
}
