#include <stdio.h>



int main(void)
{
    int counter;
    char ch;
    printf("Enter some characters:");

    while ((ch = getchar() != EOF))
        counter++;
    printf("Total number of character is %d\n.", counter);
    printf("....End...\n");
    return 0;
}
