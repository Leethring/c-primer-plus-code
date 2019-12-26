/*************************************************************************
	> File Name: r7_1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 02:59:02 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void copy_ptr(double *target, double *source, int arr_len);
void printf_row(double (*arr)[10], int row);

int main(void)
{
    double source[10][10];
    double target[10][10];

    for (int i = 0;i < 10; i++)
        for (int j = 0; j < 10; j++)
            source[i][j] = rand() / (double) RAND_MAX;

    for (int i = 0; i < 10; i++)
        copy_ptr(target[i], source[i], 10);

    printf("%-50s", "Source");
    printf("    ");
    printf("%-50s", "Target");
    putchar('\n');
    for (int i = 0 ; i < 10; i++)
    {
        printf_row(source, i);
        printf("    ");
        printf_row(target, i);
        printf("\n");
    }

    return 0;
}

void printf_row(double (*arr)[10], int row)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", arr[row][i]);
    }
}

void copy_ptr(double *target, double *source, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
        *(target + i) = *(source + i);
}
