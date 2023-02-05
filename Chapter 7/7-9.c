#include <stdio.h>
int is_prime(int n);

int main(void)
{
    int number, counter;
    printf("Input a positive integer number:");
    while ((scanf("%d", &number) == 1) && (number > 0))
    {
        for (int i = 1; i <= number; i++)
        {
            if (is_prime(i) == 1)
                printf("%d ", i);
        }
        printf("\n");
    }
    printf("\nDone.\n");
}

int is_prime(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
            counter++;
    }
    if (counter == 2)
        return 1;
    else
        return 0;
}