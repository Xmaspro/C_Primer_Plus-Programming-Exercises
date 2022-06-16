#include <stdio.h>
#include <ctype.h>



int main(void)
{
    char ch;
    int counter_upper, counter_lower;
    counter_upper = counter_lower = 0;
    printf("Enter some characters:\n");

    while ((ch = getchar()) != '\n')
    {
        if (isupper(ch))
            counter_upper++;
        else counter_lower++;
    }

    printf("Upper character is %d, lower character is %d.\n", counter_upper, counter_lower);
    
    return 0;
}
