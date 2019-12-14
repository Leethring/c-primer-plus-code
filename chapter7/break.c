/*************************************************************************
	> File Name: break.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Dec 2019 12:43:00 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void){
    float length, width;
    
    printf("Enter the lengeh of the rectangle:\n");
    while (scanf("%f", &length) == 1){
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

 
    printf("Enter the lengeh and width of the rectangle:\n");
    while (scanf("%f", &length) == 1 && scanf("%f", &width)){
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length  width of the rectangle:\n");
    }
    printf("Done.\n");

    
    return 0;
}
