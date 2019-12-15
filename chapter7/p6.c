/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Dec 2019 03:22:28 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i = 0;
    while (i < 3){
        switch(i++){
            case 0 : printf("fat ");
            case 1 : printf("hat ");
            case 2 : printf("cat ");
            default : printf("Oh no!");

        }
        putchar('\n');
    }
    return 0;
}
