/*************************************************************************
	> File Name: p9.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 04:45:26 AM UTC
 ************************************************************************/

#include<stdio.h>

#define LIMIT 50

char * get(char * string, int n);
void reverse_string(char * string);

int main(void)
{
    char string[LIMIT];

    printf("Enter a string to reverse: ");
    get(string, LIMIT);
    while (string[0] != '\0')
    {
        reverse_string(string);
        printf("Your string reversed: %s\n", string);

        printf("Enter a string to reverse(empty line quit):");
        get(string, LIMIT);
    }

    puts("Bye");

    return 0;
}

void reverse_string(char *string)
{
    char * end = string;
    char tmp;

    while (*(end + 1) != '\0')
        end++;
    while (string< end)
    {
        tmp = *string;
        *string = *end;
        *end = tmp;

        string++;
        end--;
    }
}

char *get(char *string, int n)
{
    char * ret_val;
    
    ret_val = fgets(string, n, stdin);

    while (*string != '\0')
    {
        if(*string == '\n')
        {
            *string = '\0';
            break;
        }
        string++;
    }

    return ret_val;
}
