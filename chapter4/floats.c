/*************************************************************************
	> File Name: floats.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 03:30:55 AM UTC
 ************************************************************************/

#include<stdio.h>

int main(void)
{
    const double RENT = 3852.99;
    const double RENT1 = -3852.99;      //this is for minus

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%+4.2f\n", RENT);
    printf("*%010.2f*\n", RENT);
    printf("*%f*\n", RENT1);
    printf("*%e*\n", RENT1);
    printf("*%4.2f*\n", RENT1);
    printf("*%3.1f*\n", RENT1);
    printf("*%10.3f*\n", RENT1);
    printf("*%+4.2f\n", RENT1);
    printf("*%010.2f*\n", RENT1);

}
