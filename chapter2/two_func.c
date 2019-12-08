/*************************************************************************
	> File Name: two_func.c
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Dec 2019 02:34:29 AM UTC
 ************************************************************************/

#include<stdio.h>
//* two_func.c -- a program using two functions in one file */
void butler(void);      /* ANSI/ISO C function prototyping */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

void butler(void)       /* start of function definition */
{
    printf("You rang, sir?\n");
}
