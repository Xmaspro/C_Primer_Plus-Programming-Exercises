#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* create_array(int num);
void printf_invert(char* array);


int main(void) {
    int max_num = 255;
    char* words = create_array(max_num);
    printf_invert(words);
    free(words);
}

char* create_array(int num){
    printf("Input some characters(less than %d):", num);
    char* array = malloc(num * sizeof(char));
    if (array == NULL){
        printf("Input Error\n");
        return NULL;
        }
    else{
        int i = 0;
        char c;
        while ((c = getchar()) != '\n'){
             array[i] = c;
             i++;

             if (i >= num)
                break;
        }
    }

    return array;
}

void printf_invert(char* array) {
    for (int i = strlen(array) - 1; i >= 0 ; i--){
        printf("%c", array[i]);
    }
    printf("\n");
}















// {
//    int i;
//    char str[256];

//    printf("Enter one sentence(< 255 characters):");

//    i = 0;
//    do
//    {
//     scanf("%c", &str[i]);
//    } while (str[i] != '\n' && ++i);

//    for (i--; i >= 0; i--)
//         printf("%c", str[i]);

//     printf("\n");
//     return 0;
// }
