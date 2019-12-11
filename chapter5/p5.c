/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 12:07:31 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int count, sum, count_max;

    count = 0;
    sum = 0;
    printf("Enter how long you work:\n");
    scanf("%d", &count_max);
    while(count++ < count_max)
    {
        sum = sum + count;
        printf("%d day your receive $%d, total is %d\n ", count, count, sum);
    }

    return 0;
}
