/*************************************************************************
	> File Name: r6.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 01:28:50 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

double reverse_array(double *ar, int ar_size);

int main(void)
{
    double test[SIZE];
    int i;

    srand (time(NULL));

    for(i = 0; i < SIZE; i++)
        test[i] = rand() / (double) RAND_MAX;
    printf("%5s ", "Index");
    for (i = 0; i < SIZE; i++)
        printf("| %6d ", i);
    printf("\n");
    printf("%5s ", "Value");
    for (i = 0; i < SIZE; i++)
        printf("| %6lf ", test[i]);
    putchar('\n');
    reverse_array(test, SIZE);

    for (i = 0; i < SIZE; i++)
        printf("| %6lf ", test[i]);
    printf("\n");

    return 0;
}

double reverse_array(double * ar, int ar_size)
{
    int i;
    double new_array[ar_size];

    for (i = 0; i < ar_size; i++)
        new_array[9 - i] = ar[i];

    for (i = 0; i < ar_size; i++)
        ar[i] = new_array[i];

}
