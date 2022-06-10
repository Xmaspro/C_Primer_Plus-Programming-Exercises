#include <stdio.h>
void temperature(double Fahrenheit);


int main(void)                
{
    double Fahrenheit;

    printf("Enter Fahrenheit temperatue:");
    while (scanf("%lf", &Fahrenheit) == 1)
    {
        temperature(Fahrenheit);
        printf("Enter Fahrenheit temperatue:");    
    }
    
    printf("Bye.\n");
    return 0;
}


void temperature(double Fahrenheit)
{
    const double C_F = 32.0;
    const double T_C = 273.16;
    double Celsius, Kelvin;

    Celsius = 5.0/9.0 * (Fahrenheit - C_F);
    Kelvin = Celsius + T_C;
    printf("Fahrenheit is %.3f.\nCelsius temperature is %.3f.\
           \nKelvin temperatue is %.3f.\n", Fahrenheit, Celsius,Kelvin);

}
