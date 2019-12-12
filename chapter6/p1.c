/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 07:34:57 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char lowercase[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        lowercase[i] = i + 'a';
        printf("%c ", lowercase[i]);
    }
    printf("\n");

    return 0;
}
