#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 8

int* create_arr(int);
void print_arr(int*, int);

int main(void){
    printf("Input %d integers divided by a space:", SIZE);
    int* arr = create_arr(SIZE);
    print_arr(arr, SIZE);

    return 0;
}

int* create_arr(int size){
    int* array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    return array;
}
void print_arr(int* array, int size){
    for(int i = size - 1; i >= 0; i--){
        printf("%d", array[i]);
    }
    printf(" ");
}