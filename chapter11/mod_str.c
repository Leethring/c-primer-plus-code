/*************************************************************************
	> File Name: mod_str.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jan 2020 05:54:43 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Please enter a line.\n");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');       //look for nerline character
    if (find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;

}

void ToUpper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;
    while (*str)
    {
        if(ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}
