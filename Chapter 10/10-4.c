#include <stdio.h>
#include <ctype.h>

int get_max_index(double* arr, int size);

int main(void) {
    double arr[] = { 6,2,3,4,5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The index of the max element in array is : %.d\n", get_max_index(arr, size));
}


int get_max_index(double* arr, int size) {
    double max_value = *arr;
    int max_count = 0;
    for (int i = 1;i < size;i++) {
        if (max_value < *(arr + i)) {
            max_value = *(arr + i);
            max_count = i;
        }
    }
    return max_count;
}