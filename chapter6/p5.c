/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 08:26:14 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char letter;
    int i, j, time;

    printf("Enter a uppercase letter:");
    scanf("%c", &letter);
    time = (int) letter - (int) 'A';
    printf("%d", time);
    printf("%c\n", 'A' + 1);
    for (i = 0; i <= time ; i++ )
    {
        for (j = 0; j + i <= time; j++)
            printf(" ");
        for (j = 0; j <= i ; j++)
            printf("%c", 'A' + j);
        for (j = 0; j < i; j++)
            printf("%c", 'A' + i -j - 1);
        printf("\n");

    }
    return 0;
}
