/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 01:31:22 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int n_space, n_newline, n_character;
    n_space = n_newline = n_character = 0;
    printf("enter a something:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            n_space++;
        else if (ch == '\n')
            n_newline++;
        else 
            n_character++;
    }
    printf("We get %d spaces, %d newline, %d others.\n", n_space, n_newline, n_character);

    return 0;

}
