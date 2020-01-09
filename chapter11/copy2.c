/*************************************************************************
	> File Name: copy2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jan 2020 02:41:14 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 40
#define WORD "Beast"

int main(void)
{
    const char * orig = WORD;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}
