#include <stdio.h>
void show_menu(void);
void calc_salary(float workhour, float wage);

#define BASICHOUR 40
#define WAGE_BASE1 300
#define WAGE_BASE2 450
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25


int main(void)      
{ 
    float workhour = 0;
    char selection;
    do
    {
        show_menu();
        scanf("%c", &selection);

        switch (selection)
        {
            case '1':
                printf("You've selected $8.75/hr. Enter the work hours:");
                scanf("%f", &workhour);
                calc_salary(8.75, workhour);
                break;
            case '2':
                printf("You've selected $9.33/hr. Enter the work hours:");
                scanf("%f", &workhour);
                calc_salary(9.33, workhour);
                break;        
            case '3':
                printf("You've selected $10.00/hr. Enter the work hours:");
                scanf("%f", &workhour);
                calc_salary(10.00, workhour);
                break;
            case '4':
                printf("You've selected $11.20/hr. Enter the work hours:");
                scanf("%f", &workhour);
                calc_salary(11.20, workhour);
                break;
            case '5':
                break;
            default:
                printf("Error selected! Please retry!\n");
                getchar();
                break;
        }
    } while (selection != '5');
        printf("Done!\n");
        return 0;
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

void calc_salary(float workhour, float wage)
{
    float salary, tax, taxed_salary, tax_base1, tax_base2;
    tax_base1 = WAGE_BASE1 * TAX_RATE1;
    tax_base2 = WAGE_BASE2 * TAX_RATE2;
    salary = workhour * wage;

    if (salary <= WAGE_BASE1)
    {
        tax = salary * TAX_RATE1;
        taxed_salary = salary - tax;
    } else
    if (salary > WAGE_BASE1 && salary <= WAGE_BASE2)
    {
        tax = tax_base1 + (salary - WAGE_BASE1) * TAX_RATE2;
        taxed_salary = salary - tax;
    } else
    if (salary > WAGE_BASE2)
    {
        tax = tax_base1 + tax_base2 + (salary - WAGE_BASE2) * TAX_RATE3;
    }
    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
}
