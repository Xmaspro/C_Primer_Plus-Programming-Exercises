#include <stdio.h>
#define TIMES 100000
float sum_1(int);
float sum_2(int);


int main(void){
    float s1 = sum_1(TIMES);
    float s2 = sum_2(TIMES);
    printf("Sum of the first group is: %f\n", s1);
    printf("Sum of the second group is: %f\n", s2);
    printf("Sum of both group is: %f\n", s1 + s2);

}

float sum_1(int num) {
    int i;
    float sum = 0;
    for (i = 1; i <= num; i++){
        sum += (1.0 / i);
    }
    return sum;
}
float sum_2(int num) {
    int i;
    float sum = 0;
    for (i = 1; i <= num; i++){
        if(i % 2 == 1)
            sum += (1.0 / i);
        else
            sum -= (1.0 / i);
    }
    return sum;
}
