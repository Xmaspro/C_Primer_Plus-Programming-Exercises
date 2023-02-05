#include <stdio.h>
void show_menu(void);


int main(void)
{
    char choice;
    int i;
    float salary, tax, taxed_salary;

    do
    {
        printf("Select your tax type (5 to quit): \n");
        show_menu();
        scanf("%c", &choice);

        switch (choice)
            {
            case '1':
                printf("Enter your salary: ");
                scanf("%f", &salary);

                if (salary <= 17850) tax = salary * 0.15;
                else
                tax = 17850 * 0.15 + (salary - 17850) * 0.28;
                taxed_salary = salary - tax;
                printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
                break;
            case '2':
                printf("Enter your salary: ");
                scanf("%f", &salary);

                if (salary <= 23900) tax = salary * 0.15;
                else
                tax = 23900 * 0.15 + (salary - 23900) * 0.28;
                taxed_salary = salary - tax;
                printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
                break;
            case '3':
                printf("Enter your salary: ");
                scanf("%f", &salary);

                if (salary <= 29750) tax = salary * 0.15;
                else
                tax = 29750 * 0.15 + (salary - 29750) * 0.28;
                taxed_salary = salary - tax;
                printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
                break;
            case '4':
                printf("Enter your salary: ");
                scanf("%f", &salary);

                if (salary <= 14875) tax = salary * 0.15;
                else
                tax = 14875 * 0.15 + (salary - 14875) * 0.28;
                taxed_salary = salary - tax;
                printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
                break;
            case '5':
                break;
            default:
                printf("Erro choice. Please make a choice again.\n");
            }
    } while (choice != '5');
    printf("Done.\n");

    return 0;
}

void show_menu(void)
{
    printf("*************************************************\n");
    printf("1. Single  2.Household   3.Married and shared     4.Married but divorced      5.Quit\n");
    printf("*************************************************\n");
}
