#include <stdio.h>


int main(void)      

{
   int i, sum, data[8];
   data[0] = 2;

   for (i = 1; i < 8; i++)
    {
        data[i] = 2 * data[i - 1];
    }
    
    i = 0;
    do 
    {
        printf("%d\n", data[i++]);
    } while (i < 8);

    return 0;
}
