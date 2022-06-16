#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int head = 1;
    int tail = 100;
    int guess = (head + tail) / 2;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    do
    {
        printf("Uh...is your number %d?\n", guess);

        if (getchar() == 'y') break;// 1st checkpoint

        printf("%d is larger or smaller than your input(l or s)?\n", guess);// 2nd checkpoint
        if (getchar() == 'L' || getchar() == 'l')
        {
            tail = guess - 1;
            guess = (head + tail) / 2;
            continue;
        }
        if (getchar() == 'S' || getchar() == 's')
        {
            head = guess + 1;
            guess = (head + tail) / 2;
            continue;
        }
        else {continue;}
    } while (getchar() != 'y');
    
    printf("Your answer %d is correct.\n", guess);
    

    return 0;
}
