#include <stdio.h>


int main(void)      

{
   int data1[8], data2[8];
   int i, sum;

   printf("Enter eight integer number:");
   for (i = 0; i < 8; i++)
        scanf("%d", &data1[i]);
    
    data2[0] = data1[0];
    for (i = 1; i < 8; i++)
        data2[i] = data2[i-1] + data1[i];

    for(i = 0; i < 8; i++)
        printf("%3d ", data1[i]);

    printf("\n");
    
    for(i = 0; i < 8; i++)
        printf("%3d ", data2[i]);

    printf("\n");
    return 0;
}
