/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 11:25:12 AM UTC
 ************************************************************************/

#include<stdio.h>
void ord_three(double * a, double * b, double * c);
int main(void)
{
    double x, y, z;

    printf("Enter three integer, than we will moves the value of the smallest variable into the first variable, the middle value to the second variable, and the lasgest value into the third variable.\n");
    while (scanf("%lf %lf %lf ", &x, &y, &z) == 3)
    {
        ord_three(&x, &y, &z);
        printf("smallest number : %.2lf, middle number : %.2lf, largest number : %.2lf\n", x, y, z);
        printf("Enter another three.\n");

    }
    printf("Bye!\n");

    return 0;

}

void ord_three(double * a, double * b, double * c)
{
    double sma, mid, lar;

    sma = (*a < *b) ? *a : *b;
    sma = (sma < *c) ? sma : *c;
    lar = (*a > *b) ? *a : *b;
    lar = (lar > *c) ? lar : *c;
    if (*a > sma && *a < lar)
        mid = *a;
    if (*b > sma && *b < lar)
        mid = *b;
    if (*c > sma && *c < lar)
        mid = *c;
    *a = sma;
    *b = mid;
    *c = lar;
    
}
