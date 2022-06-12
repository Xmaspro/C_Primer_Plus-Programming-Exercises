#include <stdio.h>


int main(void)      

{
   double Daphne, Deirdre;
   int i;
    i = 0;
    Daphne = Deirdre = 100;

    do
    {
        i++;
        Daphne = Daphne + 100 * 0.1;
        Deirdre = Deirdre * (1 + 0.05);
    } while (Daphne > Deirdre);
    printf("It takes at least %d years that Deirdre exceeds Daphne.\n", i);
    printf("Deirdre investment is $%.2lf, Daphne investment is $%.2lf", Deirdre, Daphne);

    return 0;
}
