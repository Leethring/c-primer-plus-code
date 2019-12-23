/*************************************************************************
	> File Name: r8.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 06:54:30 AM UTC
 ************************************************************************/

#include<stdio.h>
int largest_three(int x, int y, int z);
int main(void)
{
    int a, b, c;

    printf("Give me three integers :\n");
    scanf("%d %d %d ", &a, &b, &c);
    printf("largest three is : %d \n", largest_three(a, b, c));

    return  0;

}

int largest_three(int x, int y, int z)
{
    int largest;

    largest = x;
    if (largest < y)
        largest = y;
    if (largest < z)
        largest = z;

    return largest;

}
