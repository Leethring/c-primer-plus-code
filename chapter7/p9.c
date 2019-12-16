/*************************************************************************
	> File Name: p9.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 06:23:34 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int num;
    int prime;
    int i, j;
    bool isPrime;

    printf("Enter some positive integer\n");
    while (scanf("%d", &num) == 1)
    {
        if (num <= 0)
        {
            printf("Enter a real positive integer:\n");
            continue;
        } 
        printf("%d ", 2);
        for (i = 3; i <= num; i++)
        {
            j = 1;
            isPrime = true;
            do
            {
                j++;
                if(i % j == 0)
                {
                    isPrime  = false;
                    continue;
                }
            } while(j * j <= i);
            if (isPrime)
                printf("%d ", i);
        }
        printf("Enter another positive integer:\n");
    }

    return 0;
}
