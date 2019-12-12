/*************************************************************************
	> File Name: truth.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 02:45:55 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int n = 3;
    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    return 0;
}
