/*************************************************************************
	> File Name: r5.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 07:59:51 AM UTC
 ************************************************************************/

#include<stdio.h>
#define BOOK "War and Peace"
int main(void)
{
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
    printf("That is %.f%% of list.\n", percent);

    return 0;
}
