#include <stdio.h>

int main(void)      

{
    int i, j;

    for (i = 0; i < 6; i++)
    {
        j = 0;
        char l = 'F';
        while (j++ < i + 1)
        {
            printf("%c", l);
            l = l - 1;
        }

    printf("\n");
    }
    return 0;
}
