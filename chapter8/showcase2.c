/*************************************************************************
	> File Name: showcase2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 01:37:50 AM UTC
 ************************************************************************/

#include<stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    char ch;
    int rows, cols;

    printf("Enter a character and 2 integers:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        printf("Enter another character and 2 integers:\n");
        printf("Enter a newline to quit. \n");
    }

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }
}
