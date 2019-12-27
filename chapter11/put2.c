/*************************************************************************
	> File Name: put2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 06:29:42 AM UTC
 ************************************************************************/

#include<stdio.h>
#include"put.h"
void put1(const char * string)
{
    while (*string != '\0')
        putchar(*string++);
}
int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;

    }
    putchar('\n');

    return (count);
}
