#include <stdio.h>
double harmean(double m, double n);

int main(void)
{
    double data1, data2;
    printf("Enter two float number:\n");
    scanf("%lf %lf", &data1, &data2);

    printf("The Harmean of %lf and %lf is %lf.\n", data1, data2, harmean(data1, data2));


    return 0;
}


double harmean(double m, double n)
{
    return 1/((1/m + 1/n)/2);
}
