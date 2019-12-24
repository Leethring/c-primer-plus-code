/*************************************************************************
	> File Name: no_data.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 02:42:27 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i", "no_date[i]");
    for (i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }

    return 0;
}


