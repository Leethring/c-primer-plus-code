/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 10:57:50 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char first_name[40], last_name[40];
    printf("Please enter your name:\n");
    scanf("%s %s", first_name, last_name);
    printf("%s %s", last_name, first_name);

    return 0;
}
