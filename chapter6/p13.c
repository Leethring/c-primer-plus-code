/*************************************************************************
	> File Name: p13.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 03:04:58 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 8
int main(void)
{
    int num_eight[8];
    int i, j, num_2;

    printf("enter 8 num :");
    j = 0;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &num_eight[i]);
        num_eight[i] *= num_eight[i];
        printf("%d ", num_eight[i]);
    }
    do 
    {
        printf("%d ", num_eight[j]);
        j++; 
    } while (j < SIZE);
    
    printf("\n");
    return 0;
}
