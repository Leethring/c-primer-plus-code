/*************************************************************************
	> File Name: echo.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 11:28:50 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}
