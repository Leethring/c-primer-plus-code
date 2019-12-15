/*************************************************************************
	> File Name: r5.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Dec 2019 03:17:22 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num;
    for (num = 1 ; num <= 11; num++)
    {
        if (num % 3 == 0)
            putchar('$');
        else 
            putchar('*');
            putchar('#');
        putchar('&');
    }
    putchar('\n');

    return 0;
}
