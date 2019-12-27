/*************************************************************************
	> File Name: put_out.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 05:47:02 AM UTC
 ************************************************************************/

#include<stdio.h>
#define DEF "I am a #define string."
int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer wes initialized to me.";

    puts("I'am an argument to puts().\n");
    puts(DEF);
    puts(str2);
    puts(str1);
    puts(&str1[5]);
    puts(str2 + 4);

    return 0;
}
