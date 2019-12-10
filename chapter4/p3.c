/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 11:37:22 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float a, b;

    printf("Please enter a floating-point number :\n");
    scanf("%f", &a);
    printf("The input is %.1f or %.1e\n", a, a);
    printf("Please enter a floating-point number :\n");
    scanf("%f", &b);
    printf("The input is %.3f or %.3E\n", b, b);

    return 0;
}
