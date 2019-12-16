/************************************************************************* > File Name: p4.c> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 02:28:18 AM UTC
 ************************************************************************/

#include<stdio.h>
#define PERIOD '.'
#define EXCLAMATION '!'
#define DIFF (PERIOD - EXCLAMATION)
int main(void)
{
    char ch;

    printf("Enter a line , we will change period instead of exclamation, and change exclamation instead of two exclamation (# to quit)\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == EXCLAMATION)
            printf("!");
        if (ch == PERIOD)
            ch -= DIFF;
        putchar(ch);
    }
    return 0;
}
