#include <stdio.h>
#define INCH_CENTIMETER 2.54
#define FEET_CENTIMETER 30.48

int main(void)
{
    float mcentimeter, minch;
    int mfeet;

    printf("Enter a height in centimeters: \n");
    scanf("%f", &mcentimeter);
    
    while(mcentimeter++ > 0)
    {
        mfeet = (int)(mcentimeter - 1) / FEET_CENTIMETER;
        minch = ((mcentimeter - 1) - mfeet * FEET_CENTIMETER) / INCH_CENTIMETER;
        printf("%.1f cm = %d feet, %.1f inches\n", (mcentimeter-1), mfeet, minch);
    
        printf("Enter a height in centimeters: (<=0 to quit):");
        scanf("%f", &mcentimeter);
    }

    printf("bye\n");

    return 0;
}
