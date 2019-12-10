/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 11:02:45 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[40];
    int size;

    printf("Please enter your first name:\n");
    scanf("%s", name);
    size = strlen(name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", size + 3, name);

    return 0;

}
