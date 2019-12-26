/*************************************************************************
	> File Name: p13.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 07:02:39 AM UTC
 ************************************************************************/

#include<stdio.h>
#define ROWS 3
#define COLS 5
void a_function(int row, int col,double (* ar)[COLS]);
//Stroe the incormation in a 3x5 array.
double b_function(int col, double ar[COLS]);
//Compute the average of each set of five values.
double c_function(int row, int col, double (* ar)[COLS]);
//Compute the average of all the values.
double d_function(int row, int col, double (* ar)[COLS]);
//Determine the largest value of the 15 values.
int main(void)
{
    int n;
    int m;
    n = 3;
    m = 5;
    double set_num[n][m];
    
    a_function(n, m, set_num);
    
    for (int i = 0; i < ROWS; i++)
        printf("The average of %d set of five values: %.2lf\n", i, b_function(m, set_num[i]));
    printf("The average of all the values : %.2lf\n", c_function(n, m, set_num));
    printf("The largest value of the 15 values : %.2lf\n", d_function(n, m, set_num));
    return 0;
}

double b_function(int col, double ar[COLS])
{
    double total;
    int i;


    for (i = 0; i < COLS; i++)
        total += ar[i];

    return total / (double) COLS;
}

void a_function(int row, int col,double (* ar)[COLS])
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        printf("Enter set of %d doubles: ", COLS);
        for (j = 0; j < COLS; j++)
            scanf("%lf", ar[i] + j);

    }

}

double c_function(int row, int col, double (* ar)[COLS])
{
    int i, j;
    double total;
    int elements;
    
    elements = COLS * row;
    for (i = 0; i < row; i++)
        for (j = 0; j < COLS; j++)
            total += ar[i][j];

    return total / (double) elements;
}

double d_function(int row, int col, double (* ar)[COLS])
{
    int i, j;
    double max;

    max = ar[0][0];
    for(i = 0; i < row; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if( max < ar[i][j] )
                max = ar[i][j];
        }
    }

    return max;
}
