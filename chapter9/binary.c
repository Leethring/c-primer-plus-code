/*************************************************************************
	> File Name: binary.c
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Dec 2019 05:37:32 AM UTC
 ************************************************************************/

#include<stdio.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long num;

    printf("Enter an integer (q to quit)\n");
    while (scanf("%lu", &num) == 1)
    {
        to_binary(num);
        putchar('\n');
        printf("Enter an integer (q to quit)\n");
    }

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n/2);
    putchar(r == 0 ? '0' : '1');
    return;
}
