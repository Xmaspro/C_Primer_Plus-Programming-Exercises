#include <stdio.h>


int main(void)      

{
   double sum;
   int i, length;
   printf("Enter length:");
   scanf("%d", &length);

    while (length > 0)
    {
        // case 1
        sum = 0.0;
        for (i = 0; i < length; i++)
        {
            sum = sum + 1.0 / (i + 1);
        }
        printf("1+1/2+1/3+...= %.1f\n", sum);

        // case 2
        sum = 0.0;
        for (i = 0; i < length; i++)
        {
            if (i % 2 == 0) sum = sum + 1.0 / (i + 1);
            else sum = sum - 1.0 / (i + 1);
        }
        printf("1-1/2+1/3-...= %.1f\n", sum);


        printf("Enter length:");
        scanf("%d", &length);
    }

    printf("Done.\n");

    return 0;
}
