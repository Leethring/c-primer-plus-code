/*************************************************************************
	> File Name: flags.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 03:57:45 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, 42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}