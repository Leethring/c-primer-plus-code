/*************************************************************************
	> File Name: do_while.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 05:23:55 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const int secret_code= 13;
    int code_entered;
    do
    {
        printf("To enter the triskaidekaphobia therape club, \n");
        printf("please enter the secret doe number: ");
        scanf("%d", &code_entered);

    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");

    return 0;


}
