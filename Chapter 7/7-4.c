#include <stdio.h>



int main(void)      
{
    int counter = 0;
    char ch;

    printf("Enter one sentence:");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            printf("%c", ch);
            counter++;
        }
        else if (ch == '!')
        {
            printf("%c%c", ch, ch);
            counter++;
        }
        else 
            printf("%c", ch);
    }
    
    printf("There are %d changes.\n", counter);
    printf("...The End...\n");


    return 0;
}
