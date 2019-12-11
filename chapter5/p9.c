/*************************************************************************
	> File Name: p9.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 12:59:09 PM UTC
 ************************************************************************/

#include<stdio.h>
void Temperatures(double tem);      //We will enter a Fahrenheit temperature,and calculate the Celsius equivalent and the Kelvin equivalent.

int main(void)
{
    double tem_Fahrenheit;

    printf("Enter a Fahrenheit temperature:");
    while(scanf("%lf", &tem_Fahrenheit) == 1)
    {
        Temperatures(tem_Fahrenheit);
        printf("Enter a Fahrenheit temperature:(if enter q or nonnumeric value quit)");
    }
    printf("Done!");

    return 0;
}

void Temperatures(double tem)
{
    double Celsius, Kelvin;

    Celsius = 5.0 / 9.0 * (tem - 32.0);
    Kelvin = Celsius + 273.16;
    printf("Fahrenheit is %.2lf , Celsius is %.2lf, Kelvin is %.2lf\n", tem, Celsius, Kelvin);
}
