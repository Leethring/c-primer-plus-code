/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 07:42:43 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i,j;
    char big_A;
    big_A = 'A';

    for (i = 6; i > 0; i--)
    {
        big_A += (6 - i);
        for (j = 6;j - i >= 0; j--)
            printf("%c", big_A + (6 - j) );
        printf("\n");
    }

    return 0;
}
