/*************************************************************************
	> File Name: designated.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 03:00:37 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MONTH 12
int main(void)
{
    int day[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29, 23};
    int index;

    for (index = 0; index < MONTH; index++)
    {
        printf("%3d%3d\n", index + 1, day[index]);
    }

    return 0;
}
