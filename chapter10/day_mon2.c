/*************************************************************************
	> File Name: day_mon2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 02:53:16 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof day / sizeof day[0]; index++)
    {
        printf("Month %2d has %2d days.\n", index + 1, day[index]);

    }

    return 0;
}
