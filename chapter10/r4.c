/************************************************************************* > File Name: r4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Dec 2019 12:41:58 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int index_of_max(double *arr, int arr_size);

int main(void)
{
    double test[SIZE];
    int i;

    printf("Driver for index_of_max: returns index of the largest value stored in an array of doubles.\n");
    putchar('\n');

    srand(time(NULL));

    for (i = 0; i < SIZE; i++)
        test[i] = rand() / (double) RAND_MAX;

    printf("%5s ", "Index");
    for (int i = 0; i < SIZE; i++)
        printf("| %6d ", i);
    printf("\n");
    printf("%5s ", "Value");
    for (int i = 0; i < SIZE; i++)
        printf("| %6.4f ", test[i]);
    printf("\n");
    printf("\n");

    printf("The maximum value occurs at index %d\n", index_of_max(test, SIZE));

    return 0;

    
}

int index_of_max(double *arr, int arr_size)
{
    int index_of_max;
    int i;
    
    index_of_max = 0;
    for (i = 1; i < arr_size; i++)
    {
        if (*(arr + i) > *(arr + index_of_max))
            index_of_max = i;

    }

    return index_of_max;
}
