#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 5
char *read_char(char *st, int n);

int main(void)
{
    puts("Enter texts:");
    char text[SIZE];
    read_char(text, SIZE);
    puts("The string is:");
    puts(text);


    return 0;
}

char *read_char(char *st, int n)
{
    int i = 0;

    while (*(st + i) != EOF && i <= n)
    {
        *(st + i) = getchar();
        i++;
    }
    return st;
}
