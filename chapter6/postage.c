/*************************************************************************
	> File Name: postage.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 03:46:52 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf("Ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        printf("%5d     $%4.2f\n", ounces, cost/100.0);

    return 0;
}
