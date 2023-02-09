#include <stdio.h>
#include <ctype.h>
double get_diff(double* array, int size);

int main(void) {
    double arr[] = { 6.1,2,3,4,5 };
    double diff = get_diff(arr, sizeof(arr)/sizeof(arr[0]));

    printf("The difference of max and min of the array is: %.2f\n", diff);

    return 0;
}

double get_diff(double* array, int size){
    double max = array[0];
    double min = array[0];
    for (int i=0; i < size; i++){
        if (min > *(array + i)){
            min = *(array + i);
        }
        if (max < * (array + i)){
            max = *(array + i);
        }
    }
    return (max - min);
}