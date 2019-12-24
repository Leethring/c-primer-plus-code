/*************************************************************************
	> File Name: p11.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 01:42:59 AM UTC
 ************************************************************************/

#include<stdio.h>
void Fibonacci(double a, double b, long int limit);
int main(void)
{
    double x, y;
    long int limit;

    printf("Enter two number, get the Fibonecci numbers: \n");
    while (scanf("%lf %lf %ld", &x, &y, &limit) == 3)
    {
        if (x > y)
        {
            printf("former one should less than latter one, try again.\n");
            continue;
        }
        printf("%.2lf %.2lf", x, y);
        if (limit < y)
            break;
        Fibonacci(x, y, limit);
        printf("Enter another :\n");
    }
    printf("Bye.\n");

    return 0;

}

void Fibonacci(double a, double b, long int limit)
{
    double new;

    while (b < limit) 
    {
        new = a + b;
        printf(" %.2lf", new);
        a = b;
        b = new;
    }


}
