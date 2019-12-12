/*************************************************************************
	> File Name: entry.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 05:29:05 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while(code_entered != secret_code)
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number:");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");

    return 0;
}
