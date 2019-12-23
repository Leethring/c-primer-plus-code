/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 07:42:53 AM UTC
 ************************************************************************/

#include<stdio.h>
void chline (char ch, int i, int j);
int getint(void);
int main(void)
{
    char ch;
    int i, j;

    printf("Enter a character ;\n");
    scanf("%c", &ch);
    printf("Enter two integer:\n");
    i = getint();
    j = getint();
    chline(ch, i, j);

    return 0;
}

int getint(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a integer. Try again.\n");
    }

    return input;
}

void chline(char ch, int i, int j)
{
    int a, b;

    for (a = 1; a < i; a++)
    {
        putchar(' ');
    }
    for (; a <= j; a++)
        putchar(ch);

}
