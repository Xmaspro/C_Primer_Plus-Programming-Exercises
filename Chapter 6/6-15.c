#include <stdio.h>


int main(void)      

{
   int i;
   char str[256];

   printf("Enter one sentence(< 255 characters):");
   
   i = 0;
   do
   {
    scanf("%c", &str[i]);
   } while (str[i] != '\n' && ++i);
   
   for (i--; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
