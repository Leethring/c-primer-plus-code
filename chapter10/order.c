/*************************************************************************
	> File Name: order.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 06:39:06 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int order1[2] = {100, 200};
    int order2[2] = {300, 400};

    int * p1, * p2, * p3;
    p1 = p2 = order1;
    p3 = order2;
    printf("    *p1 = %d,   *p2 = %d,     *p3 = %d\n", 
                *p1 ,       *p2 ,       *p3);
    printf("*p1++   = %d, *++p2 = %d, (*p3)++ = %d\n", 
            *p1++       , *++p2 ,     (*p3)++);
    printf(" *p1    = %d,   *p2 = %d,     *p3 = %d\n", 
             *p1,           *p2,          *p3);

    return 0;
}
