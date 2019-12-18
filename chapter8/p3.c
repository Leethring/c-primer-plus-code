/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Dec 2019 05:06:16 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int lowercase, uppercase, others;

    lowercase = uppercase = others = 0;
    printf("Enter a series of characters , we will get the numbber of lowercase letters, and the number of uppercase letters and others.\n");
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            uppercase++;
        else if (islower(ch))
            lowercase++;
        else
            others++;
    }
    printf("Uppercase letter: %d\n", uppercase);
    printf("Lowercase letter: %d\n", lowercase);
    printf("Others: %d\n", others);

    return 0;

}
