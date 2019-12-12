/*************************************************************************
	> File Name: r6.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 06:54:11 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const int ROW = 8;
    const int COL = 4;
    int i, j;

    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
            printf("%c", '$');
        printf("\n");
    }

    return 0;
    
}
