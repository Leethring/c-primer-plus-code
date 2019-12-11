/*************************************************************************
	> File Name: p4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 11:46:16 AM UTC
 ************************************************************************/

#include<stdio.h>
#define CEN_FT 0.0328
#define CEN_IN 0.3937
#define FE_IN 12

int main(void)
{
    float centimeters,inches;
    int feet;
    printf("Enter a height in centimeters:");
    scanf("%f", &centimeters);
    while (centimeters > 0)
    {
        feet = centimeters * CEN_FT;
        inches = centimeters * CEN_IN;
        inches = inches - feet * FE_IN;
        printf("%.1f cm = %d feet, %.1f inches\n", centimeters, feet, inches);
        printf("Enter a height in centimeters:");
        scanf("%f", &centimeters);

    }
    printf("bye\n");

    return 0;
}
