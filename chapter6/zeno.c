/*************************************************************************
	> File Name: zeno.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 05:10:14 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int t_ct;
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms your want: ");
    scanf("%d", &limit);
    for (time=0, power_of_2=1, t_ct=1; t_ct <= limit;t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0/power_of_2;
        printf("time = %f when terms = %d.\n", time ,t_ct);
        
    }

    return 0;
}
