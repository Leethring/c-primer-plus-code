/*************************************************************************
	> File Name: p7.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Dec 2019 12:29:21 PM UTC
 ************************************************************************/

#include<stdio.h>
void cube(double num);
int main(void)
{
    double num;

    printf("Enter a number :");
    scanf("%lf", &num);
    cube(num);

    return 0;
}

void cube(double num)
{
    double cube;
    
    cube = num * num * num;
    printf("We give you the number's cube:%.2f\n", cube);
}
