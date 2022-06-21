#include <stdio.h>
#include <ctype.h>
#define SIZE 30
char *get_word(char *out);

int main(int argc, char *argv[])
{
    char output[SIZE];
    get_word(output);
    puts("The string is:");
    puts(output);

    return 0;
}

char *get_word(char *out)
{
    char input[SIZE];
    char *in = input;
    puts("Enter texts:");
    fgets(input, SIZE, stdin);

    while (*in == ' ' || *in == '\n'|| *in == '\t'||*in =='\0')
        in++;
    while (*in != ' ' && *in != '\n' && *in != '\t' && *in =='\0')
        *out++ = *in++;

    return out;
}
