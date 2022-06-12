#include <stdio.h>


int main(void)      

{
   float m, n;
   printf("Enter two float number(q to quit): ");

   while (scanf("%f %f", &m , &n) == 2)
    {
        printf("%.2f\n", (m - n) / (m * n) );
        printf("Enter two float number(q to quit): ");
    }

    printf("You have quit.\n");

    return 0;
}
