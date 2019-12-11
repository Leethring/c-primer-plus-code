/*************************************************************************
	> File Name: squares.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 02:59:00 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num = 1;

    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}
