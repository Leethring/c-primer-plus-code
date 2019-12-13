/*************************************************************************
	> File Name: p11.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 02:15:39 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 8
int main(void)
{
    int int_eight[8];
    int i;

    printf("enter 8 integers:");
    for(i = 0; i < SIZE; i++) 
        scanf("%d", &int_eight[i]);

    for (i = 7;i >= 0;i--)
    {
        printf("%d ", int_eight[i]);
    }
    printf("\n");

    return 0;
}
