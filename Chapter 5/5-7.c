#include <stdio.h>
int cube(int n);


int main(void)                
{
    int m;
    printf("Enter a number:\n");
    scanf("%d", &m);

    printf("The cubic value of %d is: %d\n", m, cube(m));

    return 0;
}


int cube(int n)
{
    return n * n * n;
}
