/*************************************************************************
	> File Name: p15.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 06:31:06 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int my_atoi(char *string);

int main(int argc, char * argv[])
{
    int input;
    
    if(argc != 2)
        puts("Usage: <program_name> <arg_1>");
    else
    {
        input = my_atoi(argv[1]);
        printf("%d + 5 = %d\n", input, input + 5);
        printf("%d / 5 = %d\n", input, input / 5);
        printf("%d %% 5 = %d\n", input, input % 5);
    }

    return 0;
}

int my_atoi(char *string)
{
    int total = 0;

    while (*string != '\0')
    {
        if(!isdigit(*string))
            return 0;
        else
        {
            total *= 10;
            total += *string - '0';
            
        }
        string++;
    }
    return total;
}