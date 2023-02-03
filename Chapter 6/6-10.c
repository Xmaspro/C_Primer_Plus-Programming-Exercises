#include <stdio.h>
int sum_sq(int, int);

int main(void){
    int lower, upper;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&lower, &upper);
    while (lower < upper){
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum_sq(lower, upper));
        printf("Enter next set of limits:");
        scanf("%d %d",&lower, &upper);
    }
    printf("Done\n");
}


int sum_sq(int a, int b){
    int i;
    int sum = 0;
    for (i = a; i < b + 1; i++){
        sum = sum + i * i;
    }
    return sum;
    }