/*************************************************************************
	> File Name: r9_a.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 07:07:51 AM UTC
 ************************************************************************/

#include<stdio.h>
void showcase(void);
int choice(int lower, int upper);
int main(void)
{
    int choices;
    showcase();

    while ((choices = choice(1, 4)) != 4)
    {
        printf("Your choice is %d\n", choices);
        showcase();
    }
    printf("Bye \n");

    return 0;

}
void showcase(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit");
    printf("Enter the number of your choice:\n");
}

int choice(int lower,int upper)
{
    int ans;
    int good;
    good = scanf("%d", &ans);
    while (good == 1 && (ans < lower || ans > upper))
    {
        printf("%d is not a valid choice; try again\n", ans);
        showcase();
        scanf("%d", &ans);
    }
    if (good != 1)
    {
        printf("Non-numeric input.");
        ans = 4;
    }

    return ans;
}
