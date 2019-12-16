/*************************************************************************
	> File Name: pro6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 02:51:52 AM UTC
 ************************************************************************/

#include<stdio.h>
#define STOP '#'
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
    char ch;
    int num_ei;
    bool e_flag = false;

    num_ei = 0;
    printf("Enter something(%c to stop):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        ch = tolower(ch);
        if (ch == 'e')
        {
            e_flag = true;
        }
        else if (ch == 'i')
        {
            if (e_flag)
            {
                num_ei++;
                e_flag = false;
            }
        }
        else 
            e_flag = false;

    }
    printf("We get %d \"ei\"\n ", num_ei);

    return 0;
}
