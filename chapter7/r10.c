/*************************************************************************
	> File Name: r10.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Dec 2019 03:34:36 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case 'c' : printf("Step 1\n");
                        break;
            case 'b' : printf("Step 1\n");
                        break;
            case 'h': printf("Step 1\n");
                    printf("Step 3\n");
            default : printf("Step 1\n");
                    printf("Step 2\n");
            case '\n' : ;
        }
        if (getchar() == 'b');
            break;
    }
    printf("Done\n");

    return 0;
}
