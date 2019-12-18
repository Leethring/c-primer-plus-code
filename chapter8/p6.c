/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Dec 2019 11:57:34 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
char get_first(void);
int main(void)
{
   int ch;

    printf("Test program for get_first();\n");
    printf("Enter a lines; you should see the first non-whitespace\n");
    printf("character echoed in the terminal:\n");

    ch = get_first();
    printf("%c\n", ch);
}

char get_first(void)
{
    int ch, garbage;

    ch = getchar();
    while (isspace(ch))
        ch = getchar();

    while ((garbage = getchar()) != '\n' && garbage != EOF)
        ;

    return ch;
}

