/*************************************************************************
	> File Name: day_mon3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 05:53:54 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MONTHS 12 
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %2d has %d days.\n", index + 1 ,*(days + index));
    }

    return 0;
}

