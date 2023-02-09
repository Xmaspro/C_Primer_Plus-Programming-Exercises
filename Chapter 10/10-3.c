#include <stdio.h>
#include <ctype.h>
int find_max(int* arr, int size);

int main(void) {
    int arr[] = { 1,2,3,4,5 };
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n", find_max(arr, size));
}


int find_max(int* arr, int size) {
    int max = *arr;
    for (int i = 1;i < size;i++) {
        if (max < *(arr + i))
            max = *(arr + i);
    }
    return max;
}

