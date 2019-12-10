/*************************************************************************
	> File Name: input.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 07:02:19 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
