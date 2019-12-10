/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 12:43:37 PM UTC
 ************************************************************************/

#include<stdio.h>
#define GAL_LIT 3.785
#define MIL_KIL 1.609

int main(void)
{
    float mile, gallon, kilometer, liter;

    printf("Please enter the consumed gasoline in gallon and distance in mile:\n");
    scanf("%f %f", &gallon, &mile);
    kilometer = mile * MIL_KIL;
    liter = gallon * GAL_LIT;
    printf("miles-per-gallon is %.3f\n", mile / gallon);
    printf("We get the European scheme measure the amount of fuel per distance is %.3f\n", 
          100 * liter / kilometer);
    
    return 0;
}
