#include <stdio.h>


int main(void)      

{
   int i, data[8];
   printf("Enter eight integer numbers:");
   for (i = 0; i < 8; i++)
        scanf("%d", &data[i]);

    printf("The reversed order of number is: \n");
    for (i = 7; i >= 0; i--)
        printf("%d ", data[i]);

    printf("\n");
    return 0;
}
