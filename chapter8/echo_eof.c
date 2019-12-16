/*************************************************************************
	> File Name: echo_eof.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 11:52:13 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}
