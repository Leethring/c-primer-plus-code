/*************************************************************************
	> File Name: p11.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 06:24:57 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void doubling(int (* ar)[5], int rows);
void display(int (* ar)[5], int rows);
int main(void)
{
    int ar[3][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {3, 4, 5, 2, 1}};
    int i, j;

    display(ar, 3);
    doubling(ar,3);
    display(ar,3);

    return 0;
}

void display(int (* ar)[5], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%d ", ar[i][j]);
        printf("\n");

    }
}

void doubling(int (* ar)[5], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
        for( j = 0; j < 5; j++ )
            ar[i][j] *= 2;
}
