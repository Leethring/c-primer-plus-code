/*************************************************************************
	> File Name: str_cat.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 11:36:46 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 80
char * s_gets(char * st, int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes";

    puts("What is your favorite flowe?");
    if(s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("bye.");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while (st[i] != '\n' && st[i] != '\n')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
