/*************************************************************************
	> File Name: p9.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Dec 2019 03:11:44 AM UTC
 ************************************************************************/

#include<stdio.h>
void copy(double * target, double * source, int size);
#define SIZE 3
int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target[3];
    double *pt1;
    double *pt2;
    
    pt1 = &source[2];
    pt2 = target;
    
    copy(pt2, pt1, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%1.1lf ", *(source + 2 + i));

    }
    for (int i = 0; i < 3; i++)
        printf("%1.1lf ", target[i]);

    return 0;
    
}

void copy(double * target, double * source, int size)
{
    int i;

    for (i = 0; i < size; i++)
        *(target + i ) = *(source + i);
}
