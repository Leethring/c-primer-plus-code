/*************************************************************************
	> File Name: fgets2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 03:36:12 AM UTC
 ************************************************************************/

#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done!");

    return 0;
}
