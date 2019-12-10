/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 12:07:13 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char first_name[20], last_name[20];
    int fir_name, las_name;
    printf("Please enter your first name :\n");
    scanf("%s", first_name);
    fir_name = strlen(first_name);
    printf("Please enter your last name :\n");
    scanf("%s", last_name);
    las_name = strlen(last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", fir_name, fir_name,las_name, las_name);
    printf("%-*d %-*d\n", fir_name,fir_name, las_name, las_name); 

    return 0;
}
