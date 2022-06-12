#include <stdio.h>


int main(void)      
{
int year = 0;


   float money = 100;
   while (money > 0)
   {
        money = money * 1.08 -10;
        year++;
   }
    printf("It takes %d years to withdrall all money.\n", year);

    return 0;
}
