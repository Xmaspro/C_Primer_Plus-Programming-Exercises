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
        // if the character is a increment counter
        if (ch == '.'){
            printf("!");
            count++;
        }
        // if the character is an exclamation mark, replace with '!!' and increment counter
        else if (ch == '!'){
            printf("!!");
            count++;
        }
        // otherwise, print the character
        else printf("%c", ch);
    }

    // print the total number of times characters were replaced
    printf("\nTotal replace %d times.\n", count);

    // exit the program
    return 0;

}