/*************************************************************************
	> File Name: file_eof.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 12:53:07 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch;;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Failed to oper file. Bye\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}
