/*************************************************************************
	> File Name: pnt_add.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 05:29:52 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    short no_pti;
    double no_ptl;

    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0;index < SIZE; index++)
    {
        printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);
    }
    
    for (index = 0;index < SIZE; index++)
    {
        printf("pointer + %d: %10d %10d\n", index, pti + index, ptf + index);
    }
   
    return 0;
}
