#include <stdio.h>


int main(void)      
{
    const int Dunbar = 150;
    int i = 0;
    int friend = 5;


    while (friend < Dunbar)
    {
        i++;
        friend = friend - i + (friend - i) * 2;
        printf("Week %d: Dr. Rabnud's friends number is %d\n", i, friend);
        
    }

    printf("End.\n");
    return 0;
}
