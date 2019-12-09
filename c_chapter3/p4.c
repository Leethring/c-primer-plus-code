/*************************************************************************
	> File Name: p4.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 11:30:08 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float a;
    printf("Enter a floating-point value: ");
    scanf("%f", &a);
    printf("fixed-point notation: %.6f\n", a);
    printf("exponential notation: %e\n", a);
    printf("p notation: %a\n", a);

    return 0;
}
