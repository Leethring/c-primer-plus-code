/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 12:49:44 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    float num, num_1;

    printf("enter two floating-point numbers ");
    while(scanf("%f %f", &num, &num_1) == 2)
    {
        printf(" Their difference is %f , product is %f, difference divied by product is %f", num - num_1, num * num_1, (num - num_1) / (num * num_1));
        printf("enter next tow\n");
    }

    printf("\n");

    return 0;
}
