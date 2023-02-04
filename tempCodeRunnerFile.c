

#include <stdio.h>

int main(void){
    int counter = 0; 
    char ch; 

    printf("Input some characters (# to quit).");

    while ((ch = getchar()) != '#'){
        if(ch == 'e'){ // No need for a switch case statement. Just checking for one character is sufficient. 
            if(getchar() == 'i') { // We can use getchar() instead of storing the value into a variable and checking it later. 
                counter++; 
            }  
        }  
    }

    printf("ei appears %d times.\n", counter); 

    return 0; 
}