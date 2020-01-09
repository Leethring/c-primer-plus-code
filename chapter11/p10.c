/*************************************************************************
	> File Name: p10.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 04:55:07 AM UTC
 ************************************************************************/

#include<stdio.h>

#define LIMIT 50

char * get(char *string, int n);
void remove_spaces(char *string);

int main(void)
{
    char string[LIMIT];

    printf("Test remove_space()\n");

    printf("Enter a string:");
    get(string, LIMIT);
    while (string[0] != '\0')
    {
        remove_spaces(string);
        printf("Your string, without spaces: %s\n", string);
        
        printf("Enter a string (empty line to quit):");
        get(string, LIMIT);


    }
    puts("Bye");

    return 0;
}

void remove_spaces(char * string)
{
    unsigned long spaces_found = 0;

    while (1)
    {
        if(*string == ' ')
            spaces_found++;
        else
            *(string - spaces_found) = *string;

        if(* string == '\0')
            break;
        string++;
    }


}

char * get(char * string, int n)
{
    char * ret_val;

    ret_val = fgets(string, n, stdin);
    while (*string != '\0')
    {
        if(* string == '\n')
        {
            *string = '\0';
            break;
        }
        string++;
    }

    return ret_val;
    
}
