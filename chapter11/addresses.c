/*************************************************************************
	> File Name: addresses.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 02:20:24 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MSG "I am special"
int main(void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    printf("address of \"I'm special \": %p\n", "I am special");
    printf("address ar: %p\n", ar);
    printf("Address pt: %p\n", pt);
    printf("address of MSG: %p\n", MSG);
    printf("address of \"I'm special \": %p\n", "I am special");

    return 0;
}
