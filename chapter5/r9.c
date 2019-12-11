/*************************************************************************
	> File Name: r9.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 08:31:18 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int a, g;
    int a_g, n;

    a = 'a';
    g = 'g';
    a_g = g - a;
    n = 0;
    
    while(n++ <= a_g)
    {
        printf("%c", a);
        a++;
        printf("\n");
    }
    
    return 0;
}
