/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 12:04:17 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float cup, cup_pint, cup_ounce, cup_tablespoon, cup_teaspoon;
    cup_pint = 0.5;
    cup_ounce = 8;
    cup_tablespoon = 2 * cup_ounce;
    cup_teaspoon = 3 * cup_tablespoon;
    printf("Please enter cups; ");
    scanf("%f", &cup);
    printf("We get %f cups, %f pints, %f ounces, %f tablespoon, %f teaspoon\n", cup, cup * cup_pint, cup * cup_ounce, cup * cup_tablespoon, cup * cup_teaspoon);
   
    return 0;
}
