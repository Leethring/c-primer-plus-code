/*************************************************************************
	> File Name: addemup.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 06:10:54 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}
