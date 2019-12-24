/*************************************************************************
	> File Name: arf.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 10:57:51 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 5
#define MULT 2.5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
    double array[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

    printf("The original array is :\n");
    show_array(array, SIZE);
    mult_array(array, SIZE, MULT);
    printf("The array after calling mult_array() :\n");
    show_array(array, SIZE);

    return 0;
}

void show_array(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%8.3f ", ar[i]);
    printf("\n");
}

void mult_array(double ar[], int n, double mult)
{
    int i;

    for (i = 0; i < n; i++)
        ar[i] *= mult;
}

