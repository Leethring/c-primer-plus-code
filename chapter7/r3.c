/*************************************************************************
	> File Name: r3.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Dec 2019 03:02:30 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int weight, height;

    printf("Enter your weight and height:\n");
    scanf("%d %d", &weight, &height);

    if (weight < 100 && height > 64)
    {
        if (height >= 72)
            printf("You are very tall for your weight.\n");
        else if (height < 72 && height >64)
            printf("You are tall for your weight.\n");

    }
    else if (weight >= 300 && height <= 48)
    {
        printf("You are quite short for your weight.\n");
    }
    else 
        printf("Your weight is ideal.\n");

}
