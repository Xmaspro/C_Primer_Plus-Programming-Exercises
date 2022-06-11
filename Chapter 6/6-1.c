#include <stdio.h>
#define SIZE 26 

int main(void)      

{
    char letters[SIZE];
    char a;
    int i;

    for (i = 0, a = 'a'; a <= 'z'; i++, a++)
        letters[i] = a;
    for (i = 0; i<= SIZE; i++)
        printf("%c ", letters[i]);
    printf("\n");
    
    return 0;
}
