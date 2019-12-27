/*************************************************************************
	> File Name: practice.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 02:34:40 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char * p1 = "Klingon";

    printf("Klingon");
    printf(": Beware the %ss!\n", "Klingon");
    p1[0] = 'F';
    printf("Klingon");
    printf(": Beware the %ss!\n", "Klingon");

    return 0;
}
