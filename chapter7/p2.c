/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 01:56:02 AM UTC
 ************************************************************************/

#include<stdio.h>
#define CHAR_EVERYLINE 8
int main(void)
{
    char ch;
    int i;
    i = 0;
    printf("Enter a something (# to quit)\n");
    while ((ch = getchar()) != '#')
    {
        i++;
        printf("%d ", ch);
        if (i % 8 == 0)
            printf("\n");
    }
    return 0;
}
