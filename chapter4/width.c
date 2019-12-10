/*************************************************************************
	> File Name: width.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 03:21:02 AM UTC
 ************************************************************************/

#include<stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d\n", PAGES);
    printf("*%-10d*\n", PAGES);
    printf("*% 4d*\n", PAGES);
    printf("*%0d*\n", PAGES);

    return 0;
}
