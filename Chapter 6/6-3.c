#include <stdio.h>
#define TIMES 6

// This code prints out a triangle of characters starting with 'F' and decreasing by one character for each line. The triangle will have 6 lines in total. The outer loop uses the variable i to control the number of lines and the inner loop uses the variable j to control the number of characters in each line.

int main(void)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < TIMES; i++) {
        char c = 'F';
        for (j = 0; j < i + 1; j++){
            printf("%c", c--);
        }
        printf("\n");
    }
    return 0;
}



