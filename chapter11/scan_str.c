/*************************************************************************
	> File Name: scan_str.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 05:37:51 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int count;
    char name1[11], name2[11];

    printf("Please enter 2 name.\n");
    count = (scanf("%5s %10s", name1, name2));
    printf("I read the %d names %s and %s.\n", count, name1, name2);

    return 0;
}
