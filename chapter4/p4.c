/*************************************************************************
	> File Name: p4.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 11:47:05 AM UTC
 ************************************************************************/

#include<stdio.h>
#define M_CM 10

int main(void)
{
    float height;
    char name[20];
    printf("Please enter your height and your first name:\n");
    scanf("%f %s", &height, name);
    printf("%s , you are %f m tall", name, height / M_CM);

    return 0;
    
}
