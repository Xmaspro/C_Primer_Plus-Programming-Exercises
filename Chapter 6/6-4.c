#include <stdio.h>

int main(void)      

{
    int i, j;
    char l = 'A';


    for (i = 0; i < 6; i++)
    {
        j = 0;
        while (j++ < i + 1)
        {   
            printf("%c", l);
            l = l + 1;
        }

    printf("\n");
    }
    return 0;
}
