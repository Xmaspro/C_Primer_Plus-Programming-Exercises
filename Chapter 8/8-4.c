#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    int counter = 0;
    char ch;
    printf("Enter some  characters(# to quit): ");
    while ((ch = getchar()) != EOF)
    {
        if (ch == '#') break;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            counter += 1;
            continue;
    }
    printf("\nYou enter %d letters.\n", counter);

}