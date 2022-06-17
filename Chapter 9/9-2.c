#include <stdio.h>
void chline(char, int, int);

int main(void)
{
    int rows, lines;
    char ch;
    printf("Enter words: \n");
    scanf("%c", &ch);
    printf("Enter rows and lines: ");
    scanf("%d %d", &rows, &lines);

    chline(ch, rows, lines);

    return 0;
}


void chline(char ch, int i, int j)
{
    int m , n;
    for (n = 0; n < i; n++)
    {
        for (m = 0; m < j; m++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}
