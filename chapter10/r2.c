/*************************************************************************
	> File Name: r2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Dec 2019 11:39:29 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 5
void copy_arr(double ar[], double ar_source[], int size);
void copy_ptr(double * ar,double  * ar_source, int size);
void copy_ptrs(double  ar[], double * ar_source, double * ar_source_end);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    double (* pt); 

    copy_arr(target1, source, SIZE);
    pt = source;
    copy_ptr(target2, pt, SIZE);
    copy_ptrs(target3, source, source + SIZE);

    return 0;

}

void copy_arr(double ar[], double ar_source[], int size)
{
    int i;

    printf("target1[5] : ");
    for (i = 0; i < SIZE; i++)
    {
        ar[i] = ar_source[i];
        printf("%.1lf ", ar[i]);
    }
    printf("}\n");


}

void copy_ptr(double * ar, double * ar_source, int size)
{
    int i;
    printf("target2[5]] :");
    for (i = 0; i < SIZE; i++)
    {
        *(ar + i)= *(ar_source + i);
        printf("%.1lf, ", *(ar + i)); 
    }
    printf("}\n");
}

void copy_ptrs(double * ar, double * ar_source, double * ar_source_end)
{
    for (double *ptr = ar_source; ptr < ar_source_end; ptr++, ar++)
    {
        
        *ar =*ptr;
        printf("%lf ", *ar);
    }
}
