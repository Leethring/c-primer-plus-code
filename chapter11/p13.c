/*************************************************************************
	> File Name: p13.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 06:02:07 AM UTC
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Error: at least one command-line argument required.\n");
        return 1;
    }
    else
        for (int i = argc -1; i > 0; i--)
            printf("%s ", argv[i]);

    puts("");
    return 0;
}
