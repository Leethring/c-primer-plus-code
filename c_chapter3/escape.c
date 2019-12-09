/*************************************************************************
	> File Name: escape.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 07:40:09 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf("S________\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
