/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 11:42:21 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int ages;
    float year_seconds;
    year_seconds = 3.156e7;
    printf("Please input your ages: ");
    scanf("%d", &ages);
    printf("the total seconds is %f\n", ages * year_seconds);

    return 0;
}
