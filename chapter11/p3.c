/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 02:55:26 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

#define SIZE 20

char * get_string(char * array);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    int i = 0;

    printf("What's your name?");
    get_string(hello + 7);
    puts(hello);

    return 0;
}

char * get_string(char * array)
{
    char ch ;
    int i = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF)
    {
        if(isspace(ch))
        {
            if(inword)
                break;
            else
                continue;
        }
        if(!inword)
            inword = true;

        *(array + i) = ch;
        i++;
    }

    if(ch != '\n')
        while ((ch = getchar()) != '\n')
            continue;

    return array;
}

