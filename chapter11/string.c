/*************************************************************************
	> File Name: string.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 01:50:58 AM UTC
 ************************************************************************/

#include<stdio.h>
#define MSG "This is a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}
