/*************************************************************************
	> File Name: factorial.c
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Dec 2019 05:11:01 AM UTC
 ************************************************************************/

#include<stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
    int n;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 1-12 (q to quit)\n");
    while (scanf("%d", &n) == 1)
    {
        if (n < 0)
            printf("No negative numbers, please.\n");
        else if (n >12)
            printf("Keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n", n, fact(n));
            printf("recruation: %d factorial = %ld\n", n, rfact(n));
        }
    }

    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1;n--)
        ans *= n;

    return ans;
}

long rfact(int n)
{
    long ans;

    if(n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;

    return ans;
}
