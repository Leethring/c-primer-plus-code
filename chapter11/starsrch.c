/*************************************************************************
	> File Name: starsrch.c
	> Author: 
	> Mail: 
	> Created Time: Tue 07 Jan 2020 08:39:36 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 6
int main(void)
{
    const char * list[SIZE] = 
    {
        "astronomuy", "astouding", 
        "astrophysics", "ostracize",
        "asterism", "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if(strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }

    printf("The list contained %d words begining"
          "with astro.\n", count);

    return 0;
}
