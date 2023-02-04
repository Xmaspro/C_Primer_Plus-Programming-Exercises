// include the necessary header file
#include <stdio.h>

// main function
int main(void){
    // declare variable to keep track of how many times characters are replaced
    int count = 0;

    // declare variable for storing characters
    char ch;

    // prompt the user for input
    printf("Input some characters(# to quit)\n");

    // loop through each character until '#' is entered
    while ((ch = getchar()) != '#'){
        switch (ch){
        case '.':
            printf("!");
            count++;
            break;
        case '!':
            printf("!!");
            count++;
            break;
        default:
            printf("%c", ch);
        }
    }

    // print the total number of times characters were replaced
    printf("\nTotal replace %d times.\n", count);

    // exit the program
    return 0;

}