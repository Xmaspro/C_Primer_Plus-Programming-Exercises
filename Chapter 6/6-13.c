#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TIMES 8

int* create_array(int);
void show_array(int*, int);


int main(void){
    int* arr = create_array(TIMES); //arr can be used to access and manipulate the elements of the integer array.
    show_array(arr, TIMES);
}

int* create_array(int a){
    int* array = malloc(sizeof(int));//allocates dynamic memory on the heap
    for (int i = 0; i < a; i++){
        array[i] = pow(2,i + 1);
    }
    return array; //returns a pointer to an array
}
void show_array(int* arr, int a){
    int i = 0;
    printf("Array is: ");
    do{
        printf("%d ", *(arr + i));// Dereference the pointer to get the value
    }
    while (++i < a);
    printf("\n");
}


















// {
//    int i, sum, data[8];
//    data[0] = 2;

//    for (i = 1; i < 8; i++)
//     {
//         data[i] = 2 * data[i - 1];
//     }

//     i = 0;
//     do
//     {
//         printf("%d\n", data[i++]);
//     } while (i < 8);

//     return 0;
// }
