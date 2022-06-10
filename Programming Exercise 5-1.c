
#include <stdio.h>
#define TIME 60

int main()
{
    int min, mhour, mmin;
    min = 1;
    printf("Please input minutes(<= 0 to quit): \n");
    scanf("%d", &min);

    while(min > 0)
    {
        mhour = min / TIME;
        mmin = min % TIME;
        printf("You input %d hour and %d mintues\n", mhour, mmin);
        scanf("%d", &min);

    }
    printf("Quit!\n");
    return 0;
}
