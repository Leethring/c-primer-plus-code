/*************************************************************************
	> File Name: for_cube.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 03:28:00 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num;

    printf("    n  n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num * num *num);

    return 0;
}
