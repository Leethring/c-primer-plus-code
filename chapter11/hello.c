/*************************************************************************
	> File Name: hello.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jan 2020 07:07:56 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i, times;

    if(argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage: %s postive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("hello, good looking\n");

    return 0;
}
