/*************************************************************************
	> File Name: p14.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 03:29:53 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 8
int main(void)
{
    double one[8], two[8], sum;
    int i, j;

    printf("enter first 8 array elements:");
    sum = 0;

    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &one[i]);
        sum += one[i];
        two[i] = sum;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%10lf", one[i]);
    }
    printf("\n");

    for (i = 0; i < 8; i++)
    {
        printf("%10lf", two[i]);
    }
    printf("\n");
    
    return 0;

}
