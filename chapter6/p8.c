/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Dec 2019 12:49:44 PM UTC
 ************************************************************************/

#include<stdio.h>
float dif_pro(float num, float num_1);
int main(void)
{
    float num, num_1, a;

    printf("enter two floating-point numbers ");
    while(scanf("%f %f", &num, &num_1) == 2)
    {
        a = dif_pro(num, num_1);
        printf(" Their difference is %.2f , product is %.2f, difference divied by product is %.2f", num - num_1, num * num_1, a);
        printf("enter next tow\n");
    }

    printf("\n");

    return 0;
}

float dif_pro(float num,float num_1)
{
    float dif;
    dif = (num - num_1) / (num * num_1);

    return dif;
}
