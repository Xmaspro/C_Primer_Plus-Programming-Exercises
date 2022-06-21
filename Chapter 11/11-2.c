#include <stdio.h>
#define SIZE 10
char *read_char(char *st, int n);

int main(int argc, char *argv[])
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
    do
    {
        st[i] = getchar();
        if (st[i] == '\n' ||st[i] == '\t'|| st[i] == ' ')
            break;
    } while (st[i] != EOF && i < n);

    return st;
}

