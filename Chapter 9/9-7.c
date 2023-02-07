#include <stdio.h>
#include <ctype.h>
void get_char_pos(void);
int position(char ch);

int main(void){
    get_char_pos();
    return 0;
}


void get_char_pos(void)
{
    char ch;
    printf("Enter some characters:\n");
    while ((scanf("%c", &ch) != EOF))
    {
        if (ch == '\n')
            continue;
        if (position(ch) != -1)
        {
            printf("The character %c is a letter.", ch);
            printf("The location of %c in alphabet is %d.\n", ch, position(ch));
        }
        else printf("The character %c you input is not a letter. Please enter again.\n", ch);
    }
}

int position(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return (ch - 'A' + 1);
    if (ch >= 'a' && ch <= 'z')
        return (ch - 'a' + 1);
    return -1;
}

