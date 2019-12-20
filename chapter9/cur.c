/*************************************************************************
	> File Name: cur.c
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Dec 2019 03:04:08 AM UTC
 ************************************************************************/

#include<stdio.h>

void up_and_down(int n);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n )
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n", n, &n);
}
