#include <stdio.h>
#define TIMES 6

int main(void){
    int i;
    int j;
    char c = 'A';
    for (i = 0; i < TIMES; i++){
        for (j = 0; j < i + 1; j++){
            printf("%c", c++);
}
printf("\n");
    }

}
