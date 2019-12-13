/*************************************************************************
	> File Name: p15.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 05:24:35 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char line[255];
    int i ;

    i = 0;
    printf("enter a line of input :");
    while (scanf("%c", &line[i]), line[i] != '\n')
        i++;
    for (;i >= 0; i--)
        printf("%c", line[i]);

    printf("\n");

    return 0;

}
