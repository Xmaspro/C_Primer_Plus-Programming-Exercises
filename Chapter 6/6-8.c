#include <stdio.h>


int main(void){

float m, n;
int check;

printf("Input two float numbers: ");

while (scanf("%f %f", &m, &n) == 2)
{
    printf("%.2f\n", (m - n) / (m * n));
    printf("Input two float numbers: (enter any non-numeric to quit.)\n");
}

return 0;
}
