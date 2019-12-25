/*************************************************************************
	> File Name: r5.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Dec 2019 01:04:08 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
double diff_min_max(double *ar, int ar_size);
int main(void)
{
    double test[SIZE];
    int i;

    printf("Driver for diff_min_max: return the difference between the largest value and the smallest value in an array of doulbes.\n");
    
    printf("\n");

    srand(time(NULL));

    for (i = 0; i < SIZE; i++)
        test[i] = rand() / (double) RAND_MAX;
    printf("%5s ", "Index");
    for (i = 0; i < SIZE; i++)
        printf(" %6d ", i);
    printf("\n");
    printf("%5s ", "Value");
    for (i = 0; i < SIZE; i++)
        printf(" %6lf ", test[i]);
    printf("\n");
    printf("\n");
    printf("The difference between the largest and smallest: %6lf\n", diff_min_max(test, SIZE));

    return 0;
    

}

double diff_min_max(double *ar, int ar_size)
{
    double max, min;
    int i;

    max = ar[0];
    min = ar[0];
    for (i = 0; i < ar_size; i++)
    {
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];

    }

    return max - min;
}
