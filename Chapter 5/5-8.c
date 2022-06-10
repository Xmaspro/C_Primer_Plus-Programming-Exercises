#include <stdio.h>


int main(void)                
{
    int first, second;
    printf("This program computes moduli.\nEnter an integer to serve as the second operand:  ");
    scanf("%d", &first);
    printf("Now enter the first operand:  ");
    scanf("%d", &second);
    printf("%d %% %d is %d\n", second, first, second % first);

    
    printf("Enter next number for first operand (<= 0 to quit): ");
    scanf("%d", &second);

    while (second > 0)
    {
        printf("%d %% %d is %d\n", second, first, second % first);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &second);
    }


    printf("Done\n");
    return 0;
}
