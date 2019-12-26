/*************************************************************************
	> File Name: r7.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 01:50:28 AM UTC
 ************************************************************************/
#include<stdio.h>
#define ROWS 3
#define COLS 2
void copy_arr(double (* target1)[COLS], double (* source)[COLS], int row);
void copy_ptr(double (* target2)[COLS], double (* source)[COLS], int row);
int main(void)
{
    double source[ROWS][COLS] = {{1.1, 2.2}, {3.3, 4.4}, {5.5}} ;
    double target1[ROWS][COLS];
    double target2[ROWS][COLS];
    int i, j;
    double (* pt)[COLS];

    pt = source;
    copy_arr(target1, source, ROWS);
    copy_ptr(target2, pt, ROWS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            printf("%1.1lf ", target1[i][j]);
    printf("\n");

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            printf("%1.1lf ", target2[i][j]);
    printf("\n");

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            printf("%1.1lf ", source[i][j]);
    printf("\n");

    return 0;
}

void copy_arr(double (* target1)[COLS], double (* source)[COLS], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < COLS; j++)
            target1[i][j] = source[i][j];

}

void copy_ptr(double (* target2)[COLS], double (* source)[COLS], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < COLS; j++)
            *(*(target2 + i) + j) = *(*(source + i) + j);
} 

