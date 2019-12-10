/*************************************************************************
	> File Name: stringf.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 05:30:23 AM UTC
 ************************************************************************/

#include<stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;

}
