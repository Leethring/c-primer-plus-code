/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 12:14:08 PM UTC
 ************************************************************************/

#include<stdio.h>
double power(double n, int p);
#define MINU '*'
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power to which the number will be raised. Enter q to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        if (xpow == MINU)
        {
            printf("0 to the 0 is undifined .\n");
            printf("Try again.\n");
            continue;
        }
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("bye.\n");

    return 0;

}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if (n == 0)
    {
        if (p == 0)
        {
            return MINU;
        }
        else 
            pow = 0;
    }
    else 
    {
        if (p > 0)
        {
            pow = n * power(n, p - 1);
        }
        if (p < 0)
        {
            pow = (1 / n) *power(n, p + 1);
        }
    }

    return pow;
}
