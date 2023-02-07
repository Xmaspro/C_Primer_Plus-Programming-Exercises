#include <stdio.h>
void chline(char, int, int);

int main(void)
{
    int m, n, response;
    char ch;
    m = n = 0;
    printf("Enter two positive integer (# to quit):\n");
    while ((response = scanf("%d%d", &m, &n)) == 2) {
        if (m <= 0 || n <= 0) {
            printf("Your input is <= zero.Enter again.\n");
            continue;
        }
        else {
            printf("Enter one character (# to quit):");
            scanf(" %c", &ch); //a command used to read a single character from the user input, with the leading space before %c allowing scanf to skip whitespace characters.
            chline(ch, m, n);
            printf("Enter two positive integer (# to quit):\n");

            continue;
        }
    }
    printf("Done.\n");

    return 0;
}

void chline(char ch, int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

}