/*************************************************************************
	> File Name: p16.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Dec 2019 05:38:14 AM UTC
 ************************************************************************/

#include<stdio.h>
#define ORIGINAL 100
#define SIMPLE_INT 0.1
#define COMP_INT 0.05
int main(void)
{
    double i, total_Daphne, total_Deirdre;

    total_Deirdre = ORIGINAL;
    i = 1.0;
    do
    {
        total_Daphne = 100.0 * (( 10.0 + i )/ 10.0 ); 
        printf("%lf", total_Daphne);
        total_Deirdre *= (1 + COMP_INT);
        i = 1.0 + i;
    } while (total_Daphne > total_Deirdre);
    printf("%lf years Deirdre's investment exceed the value of Daphne's investment, Deirdre have %lf, Daphne have %lf\n", i, total_Deirdre, total_Daphne);

    return 0;

}
