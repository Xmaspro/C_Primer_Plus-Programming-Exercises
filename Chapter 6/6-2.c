#include <stdio.h>

int main(void)      

  
 //method one----------------------
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i + 1; j++)
            printf("*");
    printf("\n");
    
    return 0;
}
 
  
//method two-----------------------
    int i, j;
  {
    for (i = 0; i < 5; i++)
    {
        j = 0;
        while (j++ < i + 1)
            printf("*");
    printf("\n");

    }
 return 0;
}
