/*************************************************************************
	> File Name: p7.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 12:33:14 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char read[40];
    int i, read_len;

    printf("enter a word:");
    scanf("%s", read);
    read_len = strlen(read);
    printf("%d\n", read_len);
    for (i = read_len--;i >= 0; i--)
        printf("%c", read[i]);
    printf("\n");

    return 0;
    
}
