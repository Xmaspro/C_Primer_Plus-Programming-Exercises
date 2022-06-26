#include <stdio.h>
void set_mode(int *mode, int n);
void get_info(int mode, double *fuel, double *range);
void show_info(int mode, double fuel, double range);


int main(void)
{
   int mode;
   double range, fuel;
   int n;

   puts("Enter 0 for metric mode, 1 for US mode:");
   scanf("%d", &mode);

   while (mode >= 0)
   {
        set_mode(&mode, n);
        get_info(mode, &range, &fuel);
        show_info(mode, range, fuel);
        puts("Enter 0 for metric mode, 1 for US mode:");
        puts("Enter -1 to Quit.");
        scanf("%d", &n);
   }
    puts("Done.");
    return 0;
}

void set_mode(int *mode, int n)
{
    if (n == 0)
    {
        puts("Mode 0(Metric) used.");
        *mode = n;
    }
    else if (n == 1)
    {
        puts("Mode 1 US used.");
        *mode = n;
    }
    else
    {
        puts("Invalid mode specified.Mode 1 US used.");
        *mode = 1;
    }
}

void get_info(int mode, double *fuel, double *range)
{
    if (mode == 0)
        puts("Enter distance traveled in kilometres:");
    else puts("Enter distance traveled in miles:");
    scanf("%lf", range);

    if (mode == 0)
        puts("Enter fuel consumed in liters:");
    else puts("Enter fuel consumed in miles:");
    scanf("%lf", fuel);
}

void show_info(int mode, double fuel, double range)
{
    if (mode == 0)
        printf("Fuel consumption is %.2lf liters per 100 km.\n", (fuel / range) * 100);
    else
        printf("Fuel consumption is %.1lf miles per gallon.\n", (range / fuel) * 100);
}
