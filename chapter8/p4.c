/*************************************************************************
	> File Name: p4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Dec 2019 05:16:56 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
    char ch;
    float letters_per_word, word_count, letters_count;
    bool is_word = false;
    
    word_count = letters_count = 0;
    while ((ch = getchar()) != EOF)
    {
        if (!isspace(ch) && !is_word)
        {
            is_word = true;
            word_count++;
        }
        if (isspace(ch) && is_word)
            is_word = false;
        if (!isspace(ch) && !ispunct(ch))
            letters_count++;
        letters_per_word = letters_count / word_count;
    }
    printf("letters : %f\nwords : %f\n", letters_count, word_count);
    printf("Average letter per word: %f\n", letters_per_word);

    return 0;
}
