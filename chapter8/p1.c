/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 06:08:51 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int count = 0;

    while (getchar() != EOF)
        count++;
    printf("Character count: %d\n", count);

    return 0;
}
