
// prompt to input a word and print the word in a reversed order?
#include <stdio.h>
#include <string.h>

void reversePrint(const char *str)
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}


int main(void)
{
    char string[] = "sentence";
    reversePrint(string);
    return 0;
}



















// {
//    char word[100];
//    int index;

//    printf("Enter an word:");
//    scanf("%s", word);
//    printf("The word you input is :%s\n", word);
//    printf("The reversed word is : ");

//    for (index = strlen(word)-1 ; index >= 0; index--)
//         printf("%c", word[index]);
//     printf("\n");

//     return 0;
// }
