#include <stdio.h>

int main(void)
{
    char ch;
    int counter = 0;
    while ((ch = getchar()) != EOF){
        if (ch != '\n')
            counter++;
        else
            continue;
    }
    printf("You enter a %d characters.\n", counter);

}