#include <stdio.h>
#define SPACE ' '

int main(void)      
{
    int n_space, n_row, n_ch;
    char ch;

    printf("Enter some characters: (# to quit) ");
    while ((ch = getchar()) != '#')
    {
        if (ch == SPACE)
            n_space++;
        else if (ch  == '\n')
            n_row++;
        else n_ch++;
    }
 
    printf("You entered %d spaces, %d endlines and %d other characters.\n", n_space, n_row, n_ch);
    
    return 0;
}
