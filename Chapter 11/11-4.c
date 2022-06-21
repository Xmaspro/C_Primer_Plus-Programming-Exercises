#include <stdio.h>
#include <ctype.h>
#define SIZE 30
char *get_word(char *out, int n);

int main(int argc, char *argv[])
{
    char output[SIZE];
    get_word(output, SIZE);
    puts("The string is:");
    puts(output);

    return 0;
}

char *get_word(char *out, int n)
{
    int count;
    char input[SIZE];
    char *in = input;
    puts("Enter texts:");
    fgets(input, SIZE, stdin);

    while (*in == ' ' || *in == '\n'|| *in == '\t'||*in !='\0')
        in++;
    while (*in != ' ' && *in != '\n' && *in != '\t' && *in !='\0' && count < n)
    {
        *out++ = *in++;
        count++;
    }

    return out;
}
