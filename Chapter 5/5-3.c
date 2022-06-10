#include <stdio.h>
#define WEEKDAYS 7

int main(void)
{
    int mdays, mweeks, mleftdays ;
    printf("Please input number of days(<= 0 to quit): \n");
    scanf("%d", &mdays);
    
    while(mdays++ > 0)
    {
        mweeks = (mdays - 1) / WEEKDAYS;
        mleftdays = (mdays - 1) % WEEKDAYS;
        printf("%d days are %d weeks, %d days.\n", (mdays-1), mweeks, mleftdays);
    
        printf("Please input number of days(<= 0 to quit): \n");
        scanf("%d", &mdays);
    }
    printf("End!\n");

    return 0;
}
