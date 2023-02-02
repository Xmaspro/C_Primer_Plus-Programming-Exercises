#include <stdio.h>
#define SIZE 26

int main(void){
    char letters[SIZE];
    int i;
    char a;

    for (i=0,a = 'a';  i < SIZE; i++, a++){
        letters[i] = a;
    }

    for (int i = 0; i < SIZE; i++){
        printf("%c", letters[i]);
    }
    return 0;

}

