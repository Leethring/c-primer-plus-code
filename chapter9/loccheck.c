/*************************************************************************
	> File Name: loccheck.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 03:19:52 AM UTC
 ************************************************************************/

#include<stdio.h>
void mikdo(int);
int main(void)
{
    int pooh = 2, bah = 5;
    
    printf("In main() , pooh = %d, &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d, &bah = %p\n", bah, &bah);

    mikdo(bah);

    return 0;

}

void mikdo(int bah)
{
    int pooh = 2;

    printf("In mikdo(), pooh = %d, &pooh = %p\n", pooh, &pooh);
    printf("In mikdo(), bah = %d, &bah = %p\n", bah, &bah);
}
