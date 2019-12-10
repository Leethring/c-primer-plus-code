/*************************************************************************
	> File Name: p7.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 12:26:39 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<float.h>

int main(void)
{
    double num;
    float num1;

    num = 1.0 / 3.0;
    num1 = 1.0 / 3.0;
    printf("four digits double %.4f and float %.4f\n", num, num1);
    printf("12 digit double %.12f and float %.12f\n", num, num1);
    printf("16 digit double %.16f and float %.16f\n", num, num1);
    printf("FLT_DIG %d and DBL_DIG %d\n", FLT_DIG, DBL_DIG);

    return 0;
}
