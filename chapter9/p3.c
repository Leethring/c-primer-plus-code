/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 08:01:19 AM UTC
 ************************************************************************/

#include<stdio.h>
void ijline(char ch, unsigned int i, unsigned int j);
int main(void)
{
    char ch;
    unsigned int i, j;

    printf("Enter a character and two integers:\n");
    while (scanf("%c %d %d", &ch, &i, &j) == 3)
    {
        ijline(ch, i, j);
        printf("\n");

        while (getchar() != '\n')
            continue;

        printf("Enter a character and two integers:\n");
    }

    return 0;

}

void ijline(char ch, unsigned int i, unsigned int j)
{
    unsigned int a, b;

    for (a = 0; a< i; a++)
    {
        for (b = 0; b < j; b++)
            putchar(ch);
        putchar('\n');
    }
}
