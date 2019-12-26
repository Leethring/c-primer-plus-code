/*************************************************************************
	> File Name: i_plus_plus.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 01:23:36 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i, a;

    i = 1;
    a = i++ + i++;
    printf("i++ + i++ = %d", a);

    i = 1;
    a = i++ + i++;
    printf("i++ + i++ = %d", a);

    i = 1;
    a = i++ + i++;
    printf("i++ + i++ = %d", a);

    return 0;
}
