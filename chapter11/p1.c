/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 02:38:09 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define SIZE 20

char * sgetnchar(char *array, int n);

int main(void){
    char hello[SIZE] = "Hello, ";
    int space = SIZE - strlen(hello) - 1;

    printf("What's your name? (enter %d characters)\n", space);
    sgetnchar(hello + 7,space);
    puts(hello);

    return 0;
}

char * sgetnchar(char * array, int n)
{
    char ch;

    for (int i = 0; i < n; i++)
    {
        if((ch = getchar()) == EOF)
            break;

        *(array + i) = ch;
    }

    return array;
}
