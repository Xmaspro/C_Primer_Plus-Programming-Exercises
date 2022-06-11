#include <stdio.h>

int main(void)      

{
    int i, j;
    char c;
    printf("Enter an upper character:");
    scanf("%c", &c);

    for (i = 0; i < c - 'A' + 1; i++)
    {
        for (j = 0; j < c - 'A' - i; j++)
            printf("*");

        for (j = 'A'; j < 'A' + i + 1; j++ )
            printf("%c", j);

        for (j = 'A' + i - 1; j >= 'A'; j-- )
            printf("%c", j);

        printf("\n");
    }
    return 0;
}
