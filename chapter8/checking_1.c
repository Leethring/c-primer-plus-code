/*************************************************************************
	> File Name: checking_1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 03:16:57 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
int main(void)
{
    const long MIN = -100000000L;
    const long MAX = +100000000L;
    long start;
    long stop;
    double answer;

    printf("This program computers the sum of the squares of "
          "integers in a range.\nThe lower bound should not "
         " be less than -100000000 and \nthe uupper bound"
          "should not be more than +100000000.\nEnter the "
           "limits (enter 0 for both limits to quit):\n"
          "lower limits:");
    start = get_long();
    printf("upper limit:");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n", start, stop , answer);
            
        }
        printf("Enter the limits (enter 0 for both limits to quit):\n");
        printf("lower limit:");
        start = get_long();
        printf("upper limit:");
        stop = get_long();

    }
    printf("Done.\n");

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf("is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178 or 3:");

    }
    return input;
}
double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += (double)i * (double)i;

    return total;
}
