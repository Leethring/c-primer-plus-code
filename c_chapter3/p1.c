/*************************************************************************
	> File Name: p1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 11:02:04 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int integer_overflow;
    float float_overflow, float_underflow; 
    integer_overflow = 2147483647;
    float_overflow = 8388608e8;
    float_underflow = 8388608e-8;
    printf("int = %d , overflow = %d\n", integer_overflow, integer_overflow + 1);
    printf("float = %e , overflowr = %e, underflow = %e \n", float_overflow, float_overflow +1000,float_underflow / 1000000);

    return 0;
    

}
