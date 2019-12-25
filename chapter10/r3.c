/*************************************************************************
	> File Name: r3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Dec 2019 12:19:04 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int max_int(int *arr, int arr_size);

int main(void)
{
    int test[SIZE];

    srand(time(NULL)); // seed random number generator

    for (int i = 0; i < SIZE; i++)
    {
        test[i] = rand();

    }
    printf("The maximum of ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", test[i]);
    printf("is : %d\n", max_int(test, SIZE));

    return 0;
}

int max_int(int *arr, int arr_size)
{
    int i;
    int max;

    max = arr[0];
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}
