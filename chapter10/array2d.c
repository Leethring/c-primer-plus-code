/*************************************************************************
	> File Name: array2d.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Dec 2019 01:21:53 AM UTC
 ************************************************************************/

#include<stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS]);
void sum_cols(int [][COLS]);
int sum2d(int (* ar)[COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}};

    sum_rows(junk);
    sum_cols(junk);
    printf("Sum of all element = %d\n", sum2d(junk, ROWS));

    return 0;
}

void sum_cols(int ar[][COLS])
{
    int total;
    int r;
    int c;

    for (c = 0; c < COLS; c++)
    {
        total = 0;
        for (r = 0; r < ROWS; r++)
            total += ar[r][c];
        printf("The sum of %d column is %d \n", c, total);
    }

}

void sum_rows(int ar[][COLS])
{
    int total;
    int r;
    int c;
    for (r = 0; r < ROWS; r++)
    {
        total = 0;
        for (c = 0; c < COLS; c++)
        {
            total += ar[r][c];
        }
        printf("The sum of %d row is %d\n", r, total);

    }
}

int sum2d(int (* ar)[COLS], int row)
{
    int total; 
    int r;
    int c;

    total = 0;
    for (c = 0; c < COLS; c++ )
        for (r = 0; r < ROWS; r++)
            total += ar[r][c];

    return total;
}
