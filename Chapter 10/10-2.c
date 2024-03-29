#include <stdio.h>
void copy_arr(double ar1[], double ar2[], int size);
void copy_ptr(double*, double*, int);
void copy_ptrs(double*, double*, double*);


int main(void) {
    double source[5] = { 1.1, 2.2,3.3,4.4,5.5 };
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    for (int i = 0; i < 5; i++) {
        printf("%.2f ", target1[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%.2f ", target2[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", target3[i]);
    }
    printf("\n");
}

void copy_arr(double ar1[], double ar2[], int size) {
    for (int i = 0; i < size; i++) {
        ar1[i] = ar2[i];
    }
}

void copy_ptr(double* ar1, double* ar2, int size) {
    for (int i = 0; i < size; i++) {
        *(ar1 + i) = *(ar2 + i);
    }
}

void copy_ptrs(double* ar, double* ar_first, double* ar_last) {
    for (int i = 0; i < (ar_last - ar_first); i++) {
        *(ar + i) = *(ar_first + i);
    }
}