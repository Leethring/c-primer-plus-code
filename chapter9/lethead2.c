/*************************************************************************
	> File Name: lethead2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 Dec 2019 11:39:36 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaze"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void starbar(char ch, int width);

int main(void)
{
    char ch_1;
    int num;
    int space_width;

    starbar(SPACE, WIDTH);
    putchar('\n');
    starbar('*', WIDTH);
    putchar('\n');
    space_width = (WIDTH - strlen(NAME)) / 2;
    starbar(SPACE, space_width);
    printf("%s\n", NAME);
    space_width = (WIDTH - strlen(ADDRESS)) / 2;
    starbar(SPACE, space_width);
    printf("%s\n", ADDRESS);
    space_width = (WIDTH - strlen(PLACE)) / 2;
    starbar(SPACE, space_width);
    printf("%s\n", PLACE);
    starbar('*', WIDTH);
    putchar('\n');

    return 0;

}

void starbar(char ch , int width)
{
    int count;

    for (count = 1; count <= width; count++)
        putchar(ch);

}
