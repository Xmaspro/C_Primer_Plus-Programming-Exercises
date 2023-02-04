#include <stdio.h>
float model_1 (float amount, int years, float rate);
float model_2 (float amount, int years, float rate);


int main(void){
    int initial_fund = 100;
    int rate_1 = 10;
    int rate_2 = 5;
    int years = 1;
    float s1 = model_1(initial_fund, years, rate_1);
    float s2 = model_2(initial_fund, years, rate_2);

    do{
        printf("Year %d: %.2f  %.2f  %.2f", years, s1, s2, s1-s2);
        printf("\n");
        years++;
        s1 = model_1(initial_fund, years, rate_1);
        s2 = model_2(initial_fund, years, rate_2);
    } while ((s1 - s2) >= 0);

    printf("In %dth year, Deirdre investment is higher than Daphne\n", years);
}

float model_1 (float amount, int years, float rate){
    float sum = amount + amount * years * rate / 100.0;

    return sum;
}

float model_2 (float amount, int years, float rate){
    float sum = amount;
    for (int i = 1; i <= years; i++){
        sum = sum * (1 + rate / 100.0);
    }

    return sum;
}