/*************************************************************************
	> File Name: summing.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 02:01:43 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);

    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
