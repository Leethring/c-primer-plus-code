/*************************************************************************
	> File Name: p14.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 06:08:28 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void print_error_message(void);
double pow(double base, long power);

int main(int argc, char * argv[])
{
    double base;
    long power;
    char *end;
    
    if(argc != 3)
    {
        print_error_message();
        return 1;
    }

    end = argv[1];
    while (*end != '\0')
        end++;
    base = strtod(argv[1], &end);

    if(*end)
    {
        print_error_message();
        return 1;
    }

    end = argv[2];
    while (*end != '\0')
        end++;
    power = strtol(argv[2], &end, 10);
    
    if(*end)
    {
        print_error_message();
        return 1;
    }

    printf("%.2lf ^ %ld = %.2lf\n", base, power, pow(base, power));

    return 0;
}

void print_error_message(void)
{
    puts("Usage: <program_name> <arg1 base:double> <arg2 power:int>");
}

double pow(double base, long power)
{
    double value = 1.00;
    for (long i = 0; i < power; i++)
        value *= base;
    
    return value;
}
