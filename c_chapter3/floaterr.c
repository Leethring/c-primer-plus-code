/*************************************************************************
	> File Name: floaterr.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 06:52:21 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    return 0;
}
