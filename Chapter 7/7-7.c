#include <stdio.h>
#define BASIC_WAGE 10.00
#define BASICHOUR 40
#define WAGE_BASE1 300
#define WAGE_BASE2 450
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25


int main(void)      
{
    float workhour, wage, tax, net_income, tax_base1, tax_base2;
    tax_base1 = WAGE_BASE1 * TAX_RATE1;
    tax_base2 = tax_base1 + (WAGE_BASE2 - WAGE_BASE1) * TAX_RATE2;
    
    printf("Enter working hours per week:");

    while (scanf("%f", &workhour) == 1)
    {
        if (workhour <= 0)
        {
            printf("Please enter working hours > 0:");
            scanf("%f", &workhour);
        }
        else if ((workhour > 0) && (workhour <= BASICHOUR))
        {
            wage = BASIC_WAGE * workhour;
            break;
        }
        else 
        {
            wage = BASIC_WAGE * BASICHOUR + (workhour - BASICHOUR) * BASIC_WAGE;
            break;
        }
    }
    if (wage <= WAGE_BASE1)
    {
        tax = wage * TAX_RATE1;
        net_income = wage - tax;
    }
    else if ((wage > WAGE_BASE1) && (wage <= WAGE_BASE2))
    {
        tax = tax_base1 + (wage - WAGE_BASE1) * TAX_RATE2;
        net_income = wage - tax;
    }
    else 
    {
        tax = tax_base2 + (wage - WAGE_BASE2) * TAX_RATE3;
        net_income = wage - tax;
    }
    printf("The total wage is %.2f, tax is %.2f and net income is %.2f\n", wage, tax, net_income);

    return 0;
}
