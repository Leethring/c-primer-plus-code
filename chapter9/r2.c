/*************************************************************************
	> File Name: r2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 06:12:52 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num;
    int zero;

    zero = 0;
    printf("Enter a integer:\n");
    while(scanf("%d", &num) != 1)
    {
        printf("Please enter a integer:\n");
    }
    if (num == 0)
        zero++;
    else
    {
        while(num != 0)
        {
            if((num % 10) == 0)
                zero++;
            num /= 10;
        }
    }
    printf("The integer's number of 0s : %d\n", zero);

    return 0;


}
