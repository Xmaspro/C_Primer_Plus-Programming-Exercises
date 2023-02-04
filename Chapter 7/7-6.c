#include <stdio.h>


int main(void){
    int counter = 0;
    int mark;
    char ch;
    printf("Input some characters (# to quit).");

    while ((ch = getchar()) != '#'){// Checks if the current character is "e"
        if(ch == 'e'){// Checks if the next character is "i"
            if(getchar() == 'i') {
                counter++;
            }
        }
    }
    printf("ei appears %d times.\n", counter);
    return 0;
}