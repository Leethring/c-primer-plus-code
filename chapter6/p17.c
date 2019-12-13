/*************************************************************************
	> File Name: p17.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 06:24:21 AM UTC
 ************************************************************************/

#include<stdio.h>
#define INTEREST 0.08
#define MIL 1000000.0
#define WITH 100000.0
int main(void)
{
    int years = 0;
    float balance = MIL;

    while(balance > 0)
    {
        balance -= WITH;
        balance *= 1.0 + INTEREST;
        years++;
    }
    printf("%d years Chukie empties his count.\n", years);

    return 0;
    
}
