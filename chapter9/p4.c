/*************************************************************************
	> File Name: p4.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 08:18:44 AM UTC
 ************************************************************************/

#include<stdio.h>
double inverse(double, double);
int main(void)
{
    double x, y;

    printf("Enter two integers:\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The harmonic mean of x and y is : %.2lf\n", inverse(x, y));
        printf("Enter another integers:\n");
    }

    return 0;
}

double inverse(double a, double b)
{
    double inv;

    inv = 2 / (1 / a + 1 / b);

    return inv;
}
