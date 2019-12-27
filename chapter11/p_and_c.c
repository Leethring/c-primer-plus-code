/*************************************************************************
	> File Name: p_and_c.c
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Dec 2019 02:59:19 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const char * p1 = "Don't be a fool!";
    const char * copy;

    copy = p1;
    printf("%s\n", copy);
    printf("copy = %s, &copy = %p, copy = %p\n", copy, &copy, copy);
    printf("p1 = %s, &p1 = %p, p1 = %p\n", p1, &p1, p1);

    return 0;
}
