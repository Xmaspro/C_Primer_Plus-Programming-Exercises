#include <stdio.h>
#define BASIC_WAGE 10.00
#define BASIC_HOUR 40
#define WAGE_BASE1 300
#define WAGE_BASE2 450
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

float cal_wages(float hours, float basic_wage);
float cal_tax(float wages, float rate1, float rate2, float rate3);

int main(void)
{
    float hours, wages, tax, net_income;
    printf("Enter working hours:(# to quit)");
    while (scanf("%f", &hours) == 1)
    {
        if (hours < 0)
        {
            printf("Working hours cannot be less than 0. Enter again:(# to quit)");
            continue;
        }
        else
        {
            wages = cal_wages(hours, BASIC_WAGE);
            tax = cal_tax(wages, TAX_RATE1, TAX_RATE2, TAX_RATE3);
            net_income = wages - tax;
            printf("Total wages is: %.2f, tax is %.2f, net income is %.2f.\n", wages, tax, net_income);
        }
    }

    return 0;
}

float cal_wages(float hours, float basic_wage)
{
    float wages = 0;
    if (hours <= 40)
    {
        wages = basic_wage * hours;
    }
    else if (hours > 40)
    {
        wages = basic_wage * 40 + basic_wage * (hours - 40) * 1.5;
    }
    return wages;
}

float cal_tax(float wages, float rate1, float rate2, float rate3)
{
    float tax = 0;
    if (wages <= 400)
        tax = wages * rate1;
    else if (wages <= 450)
        tax = 300 * rate1 + (wages - 300) * rate2;
    else
        tax = 300 * rate1 + 150 * rate2 + (wages - 450) * rate3;

    return tax;
}
