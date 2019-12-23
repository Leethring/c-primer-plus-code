/*************************************************************************
	> File Name: r6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 06:43:46 AM UTC
 ************************************************************************/

#include<stdio.h>
void sum_diff(int * x, int * y);
int main(void)
{
    int x, y;
    printf("enter x,y\n");
    scanf("%d %d", &x, &y);
    printf("x = %d, y = %d\n", x, y);
    sum_diff(&x, &y);
    printf("Now x is : x + y = %d, y is : x - y = %d\n", x, y);

    return 0;
}

void sum_diff(int * u, int * v)
{
    int sum, diff;

    sum = *u + *v;
    diff = *u - *v;
    *u = sum;
    *v = diff;


}
