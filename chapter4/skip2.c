/*************************************************************************
	> File Name: skip2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 07:38:10 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}
