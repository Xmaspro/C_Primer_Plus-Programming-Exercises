#include <stdio.h>

int main(void)      

{
    int i, upper, lower;
    printf("Enter upper limt:");
    scanf("%d", &upper);
    printf("Enter lower limt:");
    scanf("%d", &lower);

    printf("number     square      cube");

    for (i = lower; i <= upper; i++)
    {
        printf("%3d %10d %10d", i, i * i, i * i * i);
        printf("\n");
    }
    return 0;
}
