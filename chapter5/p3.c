/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 11:38:26 AM UTC
 ************************************************************************/

#include<stdio.h>
#define DAY_WEEK 7

int main(void)
{
    int total_days, weeks, days;
    printf("Please enter the days :\n");
    scanf("%d", &total_days);
    while (total_days > 0)
    {
        weeks = total_days / DAY_WEEK;
        days = total_days % DAY_WEEK;
        printf("%d days are %d weeks, %d days.\n", total_days, weeks, days);
        printf("Please enter another days:\n");
        scanf("%d", &total_days);
    }
    printf("Done!\n");

    return 0;
}
