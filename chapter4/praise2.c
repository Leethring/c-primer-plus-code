/*************************************************************************
	> File Name: praise2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 01:06:56 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name),sizeof name);
    printf("The phraze of praise has %zd letters", strlen(PRAISE));
    printf("and occupies %zd memory cells. \n", sizeof PRAISE);

    return 0;
}
