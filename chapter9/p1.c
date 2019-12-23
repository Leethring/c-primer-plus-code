/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 07:32:28 AM UTC
 ************************************************************************/

#include<stdio.h>
double min(double x, double y);
int main(void)
{
    double x, y;
    printf("enter two integer:\n");
    scanf("%lf %lf", &x, &y);
    printf("the small one is : %lf\n ", min(x,y));

    return 0;

}

double min(double x, double y)
{
    return (x > y) ? y : x;
}
