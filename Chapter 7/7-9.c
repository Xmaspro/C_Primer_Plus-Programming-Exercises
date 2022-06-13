#include <stdio.h>


int main(void)      
{ 
    int i, j, is_prime;
    int data;

    do
    {  
        printf("Enter a positive interger: ");
        scanf("%d", &data);
        if (data == 0)
        {
            printf("Data out of range. Please input again.\n");
            continue;
        }
        printf("Your input is %d, so the prime from %d to 2 is:", data, data);
    
        for (i = data; i > 1; i--)
        {
            is_prime = 1;
            for (j = 2; j <= i/2; j++)
            {
                if ((i % j) == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
            printf("%d ", i);  
        } printf("\n");
    } while (data != 0);

        printf("Done!\n");
        return 0;
}
