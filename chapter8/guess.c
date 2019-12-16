/*************************************************************************
	> File Name: guess.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 01:02:21 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh... is your number %d?\n", guess);
    while (getchar() != 'y')
        printf("Well, then, is it %d\n", ++guess);
    printf("I knew I could do it !\n");

    return 0;
}
