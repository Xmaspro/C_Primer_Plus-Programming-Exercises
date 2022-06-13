#include <stdio.h>


int main(void)      
{
    int counter = 0;
    char ch;

    printf("Enter one sentence:");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
                ch = '!';
                printf("%c", ch);
                counter++;
                break;
            case '!':
                printf("%c%c", ch, ch);
                counter++;
                break;
            default:
                printf("%c\n", ch);
        }
    }
    
    printf("There are %d changes.\n", counter);
    printf("...The End...\n");


    return 0;
}
