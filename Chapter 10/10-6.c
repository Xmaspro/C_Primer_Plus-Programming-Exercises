#include <stdio.h>

void sort(double* array, int size);

int main(void) {
    double arr[] = { 4,3,1,5,2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%.2f ", *(arr + i));
    }
    printf("\n");

}

void sort(double* array, int size) {
    double smaller = *array;
    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (smaller > *(array + j)) {
                double temp = smaller;
                smaller = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}