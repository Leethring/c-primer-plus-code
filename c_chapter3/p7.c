/*************************************************************************
	> File Name: p7.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 11:57:19 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float inch, centimeter_inch;
    centimeter_inch = 2.54;
    printf("Please enter your height in inches: ");
    scanf("%f", &inch);
    printf("Your height in centimeter is %.2f\n", inch * centimeter_inch);
}
