/*************************************************************************
	> File Name: scan_get.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Dec 2019 03:35:46 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char ch1, ch2;
    int num,num2;

    while (scanf("%d", &num) == 1)
    {
        putchar(num);
        printf("\n");
        printf("%d\n", num);
        while((ch1 = getchar()) != '\n')
            putchar(ch1);
        putchar('\n');
    }    
    while ((ch2 = getchar()) != '\n')
    {
        printf("pro 2\n");
        printf("%c\n", ch2);
        putchar(ch2);
        scanf("%d", &num2);
        putchar(num2);
        putchar('\n');
        printf("%d\n", num2);

    }
}
