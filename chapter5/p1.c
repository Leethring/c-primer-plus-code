/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 11:15:26 AM UTC
 ************************************************************************/

#include<stdio.h>
#define HOUR_MIN 60
int main(void)
{
    int min, hours, mins;

    printf("Please enter the time in seconds:\n");
    scanf("%d", &min);
    while (min > 0)
    {
        hours = min / HOUR_MIN;
        mins = min % HOUR_MIN;
        printf("You spend %d minutes, means spending %d hours, %d minutes\n", min, hours, mins);
        printf("please enter another time :\n");
        scanf("%d", &min);

    }
    printf("Done!\n");

    return 0;
}
