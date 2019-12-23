/*************************************************************************
	> File Name: swap1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 03:35:00 AM UTC
 ************************************************************************/

#include<stdio.h>
int interchange(int, int);
int main(void)
{
    int x, y;

    x = 10;
    y = 2;
    printf("x = %d, y = %d\n", x, y);
    interchange(x,y);
    printf("Now x = %d, y= %d\n", u, v);

    return 0;

}

int interchange(int x, int y)
{
    int tem;
    int u = x, v = y;

    tem = u;
    v = tem;
    u = v;

    return u, v;
}
