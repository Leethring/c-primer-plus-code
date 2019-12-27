/*************************************************************************
	> File Name: join_chk.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 12:08:03 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 40
#define BUGSIZE 13
char * c_gets(char * st, int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorate flower?");
    c_gets(flower, SIZE);
    if ((strlen(addon) + strlen(flower) + 1) < SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favorate bug?");
    c_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}

char * c_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
