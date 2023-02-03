#include <stdio.h>
float cal(float, float);


int main(void){
    float m, n;
    printf("Input two float numbers: ");
    while (scanf("%f %f", &m, &n) == 2){
        printf("%.2f\n", cal(m, n));
        printf("Input two float numbers:(any non-numeric to quit.)\n");
    }
    return 0;
}

float cal(float a, float b){
    return (a - b) / (a * b);
}