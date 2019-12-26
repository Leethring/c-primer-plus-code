/*************************************************************************
	> File Name: rain.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Dec 2019 03:46:52 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MONTH 12
#define YEARS 5
#define STRING1 "years"
#define STRING2 "Rainfall (inches)"
void total_year(float (* ar)[MONTH], int size);
void total_month(float (* ar)[MONTH], int size);
int main(void)
{
    float rain[YEARS][MONTH] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, 
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };

    total_year(rain, YEARS);
    printf(" Jan  Fab  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dev\n");
    total_month(rain, YEARS);
    printf("\n");

    return 0;

}


void total_year(float (* ar)[MONTH], int size)
{
    int year, month;
    float subtot;
    float total;
    for (year = 0, total = 0; year < size; year++)
    {
        for (month = 0, subtot = 0; month < MONTH; month++)
        {
            subtot += ar[year][month] ;

        }
        printf("%8d%18.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGE:\n\n");
   
}

void total_month(float (* ar)[MONTH], int size)
{
    int year, month;
    float subtot;

    for (month = 0; month < MONTH; month++)
    {
        for (year = 0, subtot = 0; year < size; year++)
        {
            subtot += ar[year][month]; 

        }
        printf("%4.1f ", subtot / YEARS);
    }
   
}
