/*************************************************************************
	> File Name: r9.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 04:01:43 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void copy(int m, int n, double source[m][n]) ;
int main(void)
{
    const int m = 3;
    const int n = 5;
    double source[m][n];
    int i, j;

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            source[i][j] = rand() / (double) RAND_MAX; 

    copy(m, n, source);

    printf("%6s ", "Source");
    for (i = 0; i < m ; i++)
    {
        for (j = 0; j < n; j++)
            printf("%6lf ", source[i][j]);
        printf("\n");
    }
    

    return 0;

}

void copy(int m , int n, double source[m][n])
{
    double target[m][n];
    int i, j;

    for (i = 0; i < m ; i++)
        for (j = 0; j < n; j++)
            target[i][j] = source[i][j];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            printf("%6lf ", target[i][j]);
        printf("\n");
    }
}
