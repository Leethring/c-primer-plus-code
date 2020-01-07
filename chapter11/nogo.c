/*************************************************************************
	> File Name: nogo.c
	> Author: 
	> Mail: 
	> Created Time: Tue 07 Jan 2020 07:11:53 AM UTC
 ************************************************************************/

#include<stdio.h>
#define ANSAWER "Grant"
#define SIZE 40 
char * s_gets(char * st, int n);
int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's bomb?");
    s_gets(try, SIZE);
    while(try != ANSAWER)
    {
        puts("No, that's wrong, Try agina.");
        s_gets(try, SIZE);

    }

    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
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
