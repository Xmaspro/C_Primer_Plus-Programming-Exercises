#include <stdio.h>
#define TIMES 5

int main(void){
    int i, j;
    char c = '$';
    for (i = 0; i < TIMES; i++){
        for (j = 0; j < i+1; j++){
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
