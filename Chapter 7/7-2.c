#include <stdio.h>


int main(void){
    char ch;
    int count = 1;

    printf("Input some characters(# to quit):");

    while ((ch = getchar()) != '#'){
        if ((count++ % 9) == 0) { printf("\n");}
        else if (ch == '\n')
            printf("'\\n'-%03d. ", ch);
        else if (ch == '\t')
            printf("'\\t'-%03d. ", ch);
        else
            printf("'%c'-%03d, ", ch, ch);
    }
    printf("Done\n");
    return 0;
}
