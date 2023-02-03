#include <stdio.h>
#include <stdlib.h>
double** create_two_array(int);
void show_array(double*, int);

int main(void){
    int size = 8;
    double** arrays = create_two_array(size);
    show_array(arrays[0], size);
    show_array(arrays[1], size);

    free(arrays[0]);
    free(arrays[1]);
    free(arrays);

}
double** create_two_array(int size){
    double* array_1 = malloc(size * sizeof(double));
    double* array_2 = malloc(size * sizeof(double));

    printf("Input %d numbers divided by space:", size);
    for (int i = 0; i < size; i++){
        if (scanf("%lf", &array_1[i]) != 1){
            free(array_1);
            free(array_2);
            return NULL;
        }
    }
    array_2[0] = array_1[0];
    for (int i = 1; i < size; i++){
        array_2[i] = array_2[i - 1] + array_1[i];
    }
    double** arrays = malloc(2 * sizeof(double*));
    arrays[0] = array_1;
    arrays[1] = array_2;
    return arrays;
}

void show_array(double* array, int size){
    for (int i = 0; i < size; i++){
        printf("%.0lf ", array[i]);
    }
    printf("\n");
}


















// {
//    int data1[8], data2[8];
//    int i, sum;

//    printf("Enter eight integer number:");
//    for (i = 0; i < 8; i++)
//         scanf("%d", &data1[i]);

//     data2[0] = data1[0];
//     for (i = 1; i < 8; i++)
//         data2[i] = data2[i-1] + data1[i];

//     for(i = 0; i < 8; i++)
//         printf("%3d ", data1[i]);

//     printf("\n");

//     for(i = 0; i < 8; i++)
//         printf("%3d ", data2[i]);

//     printf("\n");
//     return 0;
// }
