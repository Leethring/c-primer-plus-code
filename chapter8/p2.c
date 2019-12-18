/*************************************************************************
	> File Name: p2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 06:13:43 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int ch_count, ch;

    ch_count = 0;
    while((ch = getchar()) != EOF)
    {
        if (ch >= ' ')
            printf("\'%c\' : %d", ch, ch);
        else if (ch == '\n')
            printf("\'\\n\' : %d", ch);
        else if (ch == '\t')
            printf("\'\\t\' : %d", ch);
        else 
            printf("\'^%c\' : %d", ch + 64, ch);
        ch_count++;
        if (ch_count % 10 == 0)
            printf("\n");
        else
            printf("  ");
    }

    return 0;

}
