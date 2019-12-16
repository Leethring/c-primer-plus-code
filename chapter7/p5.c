/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 02:44:47 AM UTC
 ************************************************************************/

#include<stdio.h>
#define PERIOD '.'
#define EXCLAMATION '!'
#define DIFF (PERIOD - EXCLAMATION)
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.' :
                printf("!");
                continue;
            case '!' : 
                printf("!!");
                continue;
            default : printf("%c", ch);
                    continue;
        }
        
    }
    return 0;
}
