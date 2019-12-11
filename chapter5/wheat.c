/*************************************************************************
	> File Name: wheat.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 03:02:14 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SQUARES 64

int main(void)
{
    const double CROP = 2E16;
    double current , total;
    int count = 1;
    const double MM_M =1E9;
    
    printf("square     grains       total       ");
    printf("fraction of \n");
    printf("           added        grains      ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current  = 2.0 * current ;
        total = total + current ;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    }
    printf("Here is how big it is : %.2e\n", total / MM_M);
    printf("That's all.\n");

    return 0;
}
