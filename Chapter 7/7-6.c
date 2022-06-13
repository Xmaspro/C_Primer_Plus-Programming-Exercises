#include <stdio.h>


int main(void)      
{
    int counter = 0;
    char ch;
    int mark;

    printf("Enter one sentence:");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case 'e':
                mark = 1;
                break;
            case 'i':
                if (mark == 1)
                    counter++;
                mark = 0;
                break;
            default:
                mark = 0;
        }
    }
    
    printf("There are %d \"ei\".\n", counter);
    printf("...The End...\n");


    return 0;
}
