#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int num_word;
    puts("How many words do you wish to enter?");
    scanf("%d", &num_word);
    printf("Enter %d word now:", num_word);
    char **pst = (char**) malloc(num_word * sizeof(char*));

    for (int i = 0; i < num_word; i++)
    {
        char temp[100];
        scanf("%s", temp);
        int length = strlen(temp);
        char* str = (char*) malloc(length * sizeof(char));
        strcpy(str, temp);
        *(pst + i) = str;
    }
    for (int i = 0; i < num_word; i++)
    {
        printf("%s\n", *(pst + i));
    }
    free(pst);
    printf("All done!\n");

    return 0;
}
