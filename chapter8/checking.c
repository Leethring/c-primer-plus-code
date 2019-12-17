/*************************************************************************
	> File Name: checking.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 02:07:45 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
long get_long(void);
double sum_square(long a, long b);
bool bad_limits(long begin, long end, long low, long high);
int main(void)
{
    const long MAX = 10000000L;
    const long MIN = -10000000L;
    long start;
    long stop;
    double answer;

    printf("This program computes the sum of the squares of integers in a range. \nThe lower bound shold not be less than -10000000L and \n the upper bound should not be more than +10000000L .\nEnter the limit(enter 0 for both limitts to quit):\nlower limits:");
    start = get_long();
    printf("upper limits:\n");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_square(start, stop);
            printf("We get the range %ld to %ld number's square of sum is %g\n", start, stop, answer);
        }
        printf("enter another range:\n");
        printf("lower limis:\n");
        start = get_long();
        printf("upper limites:\n");
        stop = get_long();
    }

    return 0;

}

long get_long(void)
{
    char ch;
    long input;
    while (scanf("%ld", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a integer.\n");
        printf("Please enter a integer like 12, 240, -213...\n");
    }

    return input;
}

double sum_square(long a, long b)
{
    double sum = 0;
    long i;

    for (i = a; i <= b; i++)
    {
        sum += (double) i * (double) i;
    }
    
    return sum;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("%ld is large than %ld.\n", begin, end);
        not_good = true;
    }
    if(begin < low || end < low)
    {
        printf("Values must be %ld or greater\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("Values must be %ld or lower\n", high);
        not_good = true;
    }

    return not_good;
}
