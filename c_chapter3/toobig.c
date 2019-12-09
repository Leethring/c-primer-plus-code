/*************************************************************************
	> File Name: toobig.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 04:00:41 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);

    return 0;
}
