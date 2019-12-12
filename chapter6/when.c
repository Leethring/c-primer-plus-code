/*************************************************************************
	> File Name: when.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 02:18:52 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int n = 5;
    
    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);

    }
    printf("The loop has finished.\n");

    return 0;
}
