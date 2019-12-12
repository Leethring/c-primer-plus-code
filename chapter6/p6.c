/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 12:13:04 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    long lower, upper;
    long i;
    printf("This program prints a table of integers with their squares and cubes.\n");

    do
    {
        printf("enter the table lower and upper limits");
        scanf("%ld %ld", &lower, &upper);
    } while(lower > upper);
    printf("\n");
    printf(" Inter     | Square   | Cube     \n");
    printf("-----------|----------|----------\n");
    for (i = lower; i <= upper; i++)
        printf("%11ld|%10ld|%10ld\n", i, i*i, i*i*i);

    return 0;
}
