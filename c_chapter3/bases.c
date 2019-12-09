/*************************************************************************
	> File Name: bases.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 03:38:42 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}
