/*************************************************************************
	> File Name: hotel.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 02:36:15 AM UTC
 ************************************************************************/

#include<stdio.h>
#include "hotel.h"
int menu(void)
{
    int code;
    int status;

    printf("\n%s%s\n", STAR, STAR);
    printf("Enter the number of teh desired hotel:\n");
    printf("1) Fairfield Arms           2) Hotel Olympic\n");
    printf("3) Chertowrthy Plaza        4) The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STAR, STAR);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
            scanf("%*s"); // dispose of non-integer input
        printf("Enter an integer from 1 to 5, please .\n");
    }

    return code;
}

int getnights(void)
{
    int night;

    printf("How many night are needed?\n");
    while(scanf("%d", &night) != 1)
    {
        scanf("%*s");
        printf("Please enter an integer, such as 2.\n");

    }

    return night;

}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    {
        total += rate * factor;
    }
    printf("The total cost will be $%0.2f.\n", total);


}

