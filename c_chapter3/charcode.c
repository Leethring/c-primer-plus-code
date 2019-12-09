/*************************************************************************
	> File Name: charcode.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 06:04:18 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}
