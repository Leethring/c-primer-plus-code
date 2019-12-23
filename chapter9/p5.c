/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 11:16:04 AM UTC
 ************************************************************************/

#include<stdio.h>
void larger_of(double * x, double * y);
int main(void)
{
    double x, y;

    printf("Enter two double float number, we will get the bigger one.\n");
    while (scanf("%lf %lf ", &x, &y) == 2)
    {
        larger_of(&x, &y);
        printf("Now x :%lf , y : %lf\n", x, y);

        printf("Enter another one.\n");
    }
    printf("Bye.\n");

    return 0;

}

void larger_of(double * v, double * u)
{
    double max;

    max = (*v > *u) ? *v : *u;
    *v = max;
    *u = max;
}
