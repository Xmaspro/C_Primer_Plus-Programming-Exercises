#include <stdio.h>
void chline(char, int, int);

int main(void)
{
    char ch;
    int rows, lines;
    printf("Enter one character:\n");
    scanf("%c", &ch);
    printf("Enter two integers:\n");
    scanf("%d %d", &rows, &lines);
    chline(ch, rows, lines);

    return 0;
}


void chline(char ch, int rows, int lines)
{
    int m , n;
    for (n = 0; n < rows; n++)
    {
        for (m = 0; m < lines; m++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}



