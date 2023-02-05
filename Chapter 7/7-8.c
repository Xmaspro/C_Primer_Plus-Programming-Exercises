#include <stdio.h>
#define BASIC_HOUR 40
#define WAGE_BASE1 300
#define WAGE_BASE2 450
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

void show_menu(void);
float cal_wages(float hours, float basic_wage);
float cal_tax(float wages, float rate1, float rate2, float rate3);

int main(void)
{
    float hours, wage_rate,wages, tax, net_income;
    int item;
    do {
        show_menu();
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            wage_rate = 8.75;
            break;
        case 2:
            wage_rate = 9.33;
            break;
        case 3:
            wage_rate = 10.00;
            break;
        case 4:
            wage_rate = 11.20;
            break;
        case 5:
            break;
        default:
            continue;
        }
        } while (item !=1 && item != 2 && item != 3 && item != 4 && item != 5);

        printf("Enter the working hours:");
        scanf("%f",&hours);
        printf("hours:%.2f,rate of pay: %.2f\n", hours, wage_rate);
        wages = cal_wages(hours, wage_rate);
        tax = cal_tax(wages, TAX_RATE1, TAX_RATE2, TAX_RATE3);
        net_income = wages - tax;
        printf("Total wages is: %.2f, tax is %.2f, net income is %.2f.\n", wages, tax, net_income);

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

void show_menu(void)
{
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) quit";

    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("%-40s", s1);
    printf("%-40s\n", s2);
    printf("%-40s", s3);
    printf("%-40s\n", s4);
    printf("%-40s\n", s5);
    printf("******************************************************************\n");
}