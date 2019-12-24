/*************************************************************************
	> File Name: day_mon1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 02:29:03 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MONTH 12
int main(void)
{
    int day[MONTH]; 
    int index;
    day[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    for (index = 0; index < MONTH; index++)
    {
        printf("Month %2d has %2d day. \n", index + 1, day[index]);

    }

    return 0;
    
}
