#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    while ((ch = getchar()) != '\n'){
        if (isalpha(ch))
            putchar(toupper(ch));
        else
            putchar(ch);
    }
    putchar(ch);

    return 0;
}