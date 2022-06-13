#include <stdio.h>



int main(void)      
{
    int data, n_even, n_odd, sum_even, sum_odd;
    float avg_even, avg_odd;

    printf("Enter integer (q to quit):");

    while (scanf("%d", &data) == 1)
    {
        if ((data % 2) == 0)
        {
            if (data == 0)
                continue;
            else
            {   
                n_even++;
                sum_even += data;
                avg_even = sum_even / n_even;
            }
        }
        else 
        {
            n_odd++;
            sum_odd += data;
            avg_odd = sum_odd / n_odd;
        }
    }
    printf("Even number is %d, average of even number is %.2f, sum of even number is %d\n", n_even, avg_even, sum_even);
    printf("Odd number is %d, average of odd number is %.2f, sum of odd number is %d\n", n_odd, avg_odd, sum_odd);
    printf("...End...\n");

    return 0;
}
