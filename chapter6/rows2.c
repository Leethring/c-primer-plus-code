/*************************************************************************
	> File Name: rows2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 05:47:44 AM UTC
 ************************************************************************/

#include<stdio.h>
int main (void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch; 
    
    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;

}
