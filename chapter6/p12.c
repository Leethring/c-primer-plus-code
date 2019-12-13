/*************************************************************************
	> File Name: p12.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 02:36:12 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    double sum1, sum_min, sum_plus;
    double i;
    long long  unsigned int size;

    printf("enter the infinite series size:");
    scanf("%llu", &size);
    while (size > 0)
    {
        sum1 = 0;
        sum_min = 0;
        sum_plus = 0;
        for (i = 1; i <= size; i++)
        {
            sum1 += 1.0 / i;
        }
        for (i = -1; i >= -size; i = i - 2)
        {
            sum_min += -1.0 / i;
        }
        for (i = 2; i <= size; i = i + 2)
        {
            sum_plus += -1.0 / i;
        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %lf\n", sum1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %lf\n", sum_min + sum_plus);
        printf("enter another infinite series size:\n");
        scanf("%llu", &size);
    }
    printf("Done\n");

    return 0;
    
}
