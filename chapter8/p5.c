/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Dec 2019 05:44:21 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#define INITIAL_VALUE 50
char get_choice(void);
char get_first(void);
int main(void)
{
    char choice;
    int max, min;
    int guess;
    
    max = 100;
    min = 0;
    guess = INITIAL_VALUE;
    printf("My first guess is %d\n", guess);
    while ((choice = get_choice()) != 'c')
    {
        if (choice == 'h')
            max = guess;
        else 
            min = guess;
        guess = (min + max) / 2;
        printf("I guess it's: %d", guess);


    }
    printf("I knew I could to it !\n");

    return 0;
}


char get_choice(void)
{
    char ch1;

    printf("Tell me , my guess is :\n");
    printf("h) high     l) low      c) correct\n");
    ch1 = get_first();
    while (ch1 != 'h' && ch1 != 'l' && ch1 != 'c')
    {
        printf("You should enter h , l or c\n");
        ch1 = get_first();
    }

    return ch1;
}

char get_first(void)
{
    int first;

    first = getchar();
    while (getchar() != '\n')
        continue;

    return first;
}
