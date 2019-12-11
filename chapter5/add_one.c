/*************************************************************************
	> File Name: add_one.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 05:33:00 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int ultra = 0, super = 0;

    while(super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
        
    }
    return 0;
}
