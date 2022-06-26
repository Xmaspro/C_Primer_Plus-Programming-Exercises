#include <stdio.h>
#include <ctype.h>
#include <string.h>

void critic(int *n);

int main(int argc, char *argv[])
{
   int units;
   puts("How may pounds?");
   scanf("%d", &units);

   while (units != 56)
        critic(&units);
    printf("You are correct.\n");

    return 0;
}

void critic(int *n)
{
    while (*n > 56)
    {
        puts("Your guess is bigger than answer. Try again.");
        scanf("%d", n);
    }
     while (*n < 56)
    {
        puts("Your guess is smaller than answer. Try again.");
        scanf("%d", n);
    }

}




