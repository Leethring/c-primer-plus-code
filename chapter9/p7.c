/*************************************************************************
	> File Name: p7.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 11:50:52 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int char_num(char ch);
int main(void)
{
    char chr;

    printf("Enter characters: \n");
    while ((chr = getchar()) != EOF)
    {
        printf("%c : %d  ", chr, char_num(chr));

    }

    return 0;
}

int char_num(char ch)
{
    int letter_location;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        ch = tolower(ch);
        letter_location = ch - 'a' + 1;
    }
    else
        return -1;

    return letter_location;
}
