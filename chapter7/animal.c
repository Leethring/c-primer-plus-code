/*************************************************************************
	> File Name: animal.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Dec 2019 01:03:25 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    
    printf("Give me a letter of the alphabet, and I will give");
    printf("an animal name\n begintning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
        {
            switch (ch)
            {
                case 'a' :
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b' :
                    printf("babiruse, a wild pig of Malay\n");
                    breakk:
                case 'c' :
                    printf("coati, racoonlike mamma\n");
                    break;
                case 'd' :
                    printf("desman, aquatic , molelike critter\n");
                    break;
                case 'e' :
                    printf("echida, the spiny anteater\n");
                    break;
                case 'f' :
                    printf("fisher, brownish marten\n");
                    break;
                default :
                    printf("That's a stumper!\n");
            }
        }
        else
            printf("I recognize only lowercase letter.\n");
        printf("Please type another letter or a #.\n");

    }
    printf("Bye!\n");

    return 0;
}
