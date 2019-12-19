/*************************************************************************
	> File Name: lethead1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 Dec 2019 11:19:28 AM UTC
 ************************************************************************/

#include<stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDREASS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDREASS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void)
{
    int count; 
     
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}
