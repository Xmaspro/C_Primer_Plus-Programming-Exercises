#include <stdio.h>

int main()
{
    int i, j;
    printf("Please input an integer number: \n");
    scanf("%d", &i);
    j = i + 10;
    
    while(i++ < j + 1)
    {
        printf("%d\t", i-1);
    }
    printf("\nEnd!\n");

    return 0;
}
