#include <stdio.h>
int main(void)                /* finds sum of first 20 integers */
{

    int days,count, sum;           /* declaration statement          */
    printf("Enter how many days: \n");
    scanf("%d", &days);
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */

    while (count++ < days)      /* while                          */
        sum = count * count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */
  
    return 0;
}
