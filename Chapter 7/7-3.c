#include <stdio.h>


int main(void){
    int n_even, n_odd;
    n_even = n_odd = 0;
    float sum_even, sum_odd;
    sum_even = sum_odd = 0.0;
    int input;
    printf("Input numbers (0 to quit):");
    while (scanf("%d", &input)){
        if (input == 0) break;
        else if ((input % 2) == 0){
            sum_even += input;
            n_even++;
        }
        else{
            sum_odd += input;
            n_odd++;
            }
    }
    printf("You input odd number %d times, average of odd numbers is %.2f.\n", n_odd, 1.0*sum_odd/n_odd);
    printf("You input even number %d times, average of even numbers is %.2f.\n", n_even, 1.0*sum_even/n_even);
}