/*************************************************************************
	> File Name: p8_other.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 01:06:45 PM UTC
 ************************************************************************/

#include<stdio.h>

int main(void)
{
    const float KM_PER_MILE = 1.609;
    const float LT_PER_GALLON = 3.785;
    float miles_travelled, gallons_gas_consumed;
    float miles_per_gallon, liters_per_100km;
    float a, b, c;

    a = 2;
    b = 1;
    c = 2. / b;
    printf("2. / b = %f\n", c);
    printf("Enter your distance travelled in miles:");
    scanf("%f", &miles_travelled);
    printf("Enter the amount of gas consumed in gallosn:");
    scanf("%f", &gallons_gas_consumed);

    miles_per_gallon = miles_travelled / gallons_gas_consumed;
    liters_per_100km = 100. / miles_per_gallon * LT_PER_GALLON / KM_PER_MILE;

    printf("Miles per gallon: %.1f\n", miles_per_gallon);
    printf("Liters per 100 kilometers:j %.1f \n", liters_per_100km);

    return 0;
}
