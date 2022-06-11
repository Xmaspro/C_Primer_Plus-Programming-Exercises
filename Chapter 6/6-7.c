#include <stdio.h>
#include <string.h>

int main(void)      

{
   char word[100];
   int index;

   printf("Enter an word:");
   scanf("%s", word);
   printf("The word you input is :%s\n", word);
   printf("The reversed word is : ");

   for (index = strlen(word)-1 ; index >= 0; index--)
        printf("%c", word[index]);
    printf("\n");
    
    return 0;
}
