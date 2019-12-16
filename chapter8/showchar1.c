/*************************************************************************
	> File Name: showchar1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 01:24:23 PM UTC
 ************************************************************************/

#include<stdio.h>
void display(char cr, int line, int width);
int main(void)
{
    int ch;
    int cols, rows;

    printf("Enter a character and two integers.\n");
    while ((ch = getchar()) != '\n');
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers:\n");
        printf("Enter a newline to quit.\n");

    }
    printf("Bye.\n");

    return 0;

}

void display(char cr, int line, int width)
{
    int row, col;

    for (row = 1;row <= line ; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}
