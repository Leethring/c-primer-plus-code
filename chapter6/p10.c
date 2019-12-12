/*************************************************************************
	> File Name: p10.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 01:08:48 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int lower, upper;
    int lower_2, sum;
    int i;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &lower, &upper);
    while (lower < upper)
    {
        for (i = lower,sum = 0 ; i <= upper; i++)
        {
            lower_2 = i * i;
            sum += lower_2;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper,sum);
        printf("Enter next set of limit:");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");

    return 0;
}
