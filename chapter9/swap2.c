/*************************************************************************
	> File Name: swap2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 04:01:07 AM UTC
 ************************************************************************/

#include<stdio.h>
void interchange(int * u, int * v);
int main(void)
{
    int x, y;

    printf("x = %d, y = %d\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d, y = %d\n", x, y);

    return 0;

}

void interchange(int * u, int * v)
{
    int tem;

    tem = *u;
    *u = *v;
    *v = tem;
}
