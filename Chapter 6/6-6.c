#include <stdio.h>

int main(void){
    int lower,upper,i;
    printf("Please enter the lower limit: ");
    scanf("%d",&lower);
    printf("Please enter the upper limit: ");
    scanf("%d",&upper);

    for (i = lower; i <= upper; i++){
        printf("%d %d %d\n",i, i*i, i*i*i);

    }
        return 0;
}


