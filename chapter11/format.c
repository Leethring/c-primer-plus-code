/*************************************************************************
	> File Name: format.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jan 2020 03:23:09 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MAX 20
char * s_get(char * st, int n);

int main(void)
{
    char  first[MAX];
    char last[MAX];
    char format[2 * MAX + 10];
    double prize;

    puts("Enter your first name:");
    s_get(first, MAX);
    puts("Enter your last name:");
    s_get(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    sprintf(format, "%s, %-16s: $%6.2f\n", first, last, prize);
    puts(format);

    return 0;
}

char * s_get(char * st, int n)
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
