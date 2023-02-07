#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    while (scanf("%c", &ch) != '#') {
        if (ch >= 'A' && ch <= 'Z')
            printf("%d", ch - 'A' + 1);
        if (ch >= 'a' && ch <= 'z')
            printf("%d", ch - 'a' + 1);
    }

    return 0;
}

