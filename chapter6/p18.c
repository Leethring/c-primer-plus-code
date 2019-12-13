/*************************************************************************
	> File Name: p18.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 06:35:35 AM UTC
 ************************************************************************/

#include<stdio.h>
#define DUNBAR 150
#define INITIAL 5
int main(void)
{
    int total_friends, i;
    
    i = 0;
    total_friends = INITIAL;
    do
    {
        i++;
        total_friends = (total_friends - i) * 2;
    } while (total_friends < 150);

    printf("%d weeks \n", i);

    return 0;
}
