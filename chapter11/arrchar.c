/*************************************************************************
	> File Name: arrchar.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 02:42:16 AM UTC
 ************************************************************************/

#include<stdio.h>
#define LIM 5
#define SLEN 40
int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly", 
        "Multiplying accurately", 
        "Stashing data", 
        "Following instructions to the leter", 
        "Understading the C language"
    };
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line", 
        "sleeping", 
        "Watching television", 
        "Mailing letters", 
        "Reading emil"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s  %-25s\n", "My talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

    return 0;
}
