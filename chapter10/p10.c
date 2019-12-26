/*************************************************************************
	> File Name: p10.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 06:11:22 AM UTC
 ************************************************************************/

#include<stdio.h>
void copy_add(int * source1, int * source2, int * target, int size);
#define SIZE 4
int main(void)
{
    int source1[SIZE] = {1, 2, 4, 5};
    int source2[SIZE] = {1, 0, 4, 6};
    int target[SIZE];

    copy_add(source1, source2, target, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", source1[i]);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", source2[i]);
    printf("\n");
    
    for (int i = 0; i < SIZE; i++)
        printf("%d ", target[i]);
    printf("\n");
    
    return 0;
}

void copy_add(int * source1, int * source2, int * target, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}
