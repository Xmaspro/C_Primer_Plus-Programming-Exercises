#include <stdio.h>
#include <ctype.h>

int main(void) {
    int head = 0;
    int tail = 100;
    int guess = (head + tail) / 2;
    char response;
    printf("***********************************************\n");
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("***********************************************\n");

    do {
        printf("Is your input %d ?", guess);
        response = getchar();
        while(getchar()!= '\n');// remove newline character from input buffer
        if (response == 'y') {
            printf("Success! %d is your input!\n", guess);
            break;
        }
        else if (response == 'n') {
            printf("%d is wrong!\n", guess);
            printf("%d is larger or smaller than your input?\n", guess);
            response = getchar();
            if (response == 'l') {
                tail = guess;
                guess = (head + tail) / 2;
                printf("current data: %d %d %d\n", head, tail, guess);
                continue;
            }
            else if (response == 's') {
                head = guess;
                guess = (head + tail) / 2;
                continue;
            }
        }
        else {
            printf("Your input should be \'y\' or \'n\' Enter again.\n");
        }
    } while (response != 'y');
    printf("Game over.\n");
}