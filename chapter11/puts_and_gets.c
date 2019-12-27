/*************************************************************************
	> File Name: puts_and_gets.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 03:10:37 AM UTC
 ************************************************************************/

#include<stdio.h>
#define SIZE 81 
int main(void)
{
    char words[SIZE];

    printf("Enter a string, please: \n");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Dones!");

    return 0;
}
