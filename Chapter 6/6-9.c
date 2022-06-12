#include <stdio.h>
float cal(float m, float n);



int main(void)      

{
   float m, n;
   printf("Enter two float number(q to quit): ");

   while (scanf("%f %f", &m , &n) == 2)
    {
        printf("%.2f\n", cal(m , n) );
        printf("Enter two float number(q to quit): ");
    }

    printf("You have quit.\n");

    return 0;
}

float cal(float m, float n)
{
    return (m - n) / (m * n);
}
