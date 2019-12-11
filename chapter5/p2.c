/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 11:32:09 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num, num_10;
    printf("Please enter a number :\n");
    scanf("%d", &num);
    num_10 = num + 10; 
    while (num <= num_10)
    {
        printf("%d  ", num);
        num++;
    }

    return 0;
}
