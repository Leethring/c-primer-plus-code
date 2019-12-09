/*************************************************************************
	> File Name: p6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Dec 2019 11:49:38 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int quarts, quart_grams;
    float molecule_gram;
    quart_grams = 950;
    molecule_gram = 3.0e-23;
    printf("Please input how much water you need: ");
    scanf("%d", &quarts);
    printf("We have %f water molecule.\n", quarts * quart_grams / molecule_gram);

    return 0;

}
