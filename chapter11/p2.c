/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 02:45:58 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 20

char * sgetnchar(char * array, int n);

int main(void)
{
    char hello[SIZE] = "Hello, ";
    int space = SIZE - strlen(hello) - 1;
    
    puts("What's your name?");
    sgetnchar(hello + 7, space);
    puts(hello);

    return 0;
}

char * sgetnchar(char * array, int n)
{
    int i = 0;
    char ch;
    while ((ch = getchar()) != EOF && !isspace(ch) && i < n)
    {
        *(array + i ) = ch;
        i++;
    }

    return array;
}
