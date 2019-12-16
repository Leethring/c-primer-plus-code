/*************************************************************************
	> File Name: p10.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 07:01:10 AM UTC
 ************************************************************************/

#include<stdio.h>
#define BASIC_TAX 0.15
#define EXCCESS_TAX 0.28
#define SINGLE 17850
#define HEAD_OF_HOUSEHOLD 23900
#define MARRIED_JOINT 29750
#define MARRIED_SEPERATE 14875
#define SINGLE_BREAK (SINGLE * BASIC_TAX)
#define HEAD_OF_HOUSEHOLD_BREAK (HEAD_OF_HOUSEHOLD * BASIC_TAX)
#define MARRIED_JOINT_BREAK (MARRIED_JOINT * BASIC_TAX)
#define MARRIED_SEPERATE_BREAK (MARRIED_SEPERATE * BASIC_TAX)
void flush_input_buffer();
int main(void)
{
    char choice;
    double pay, tax;
    int who;

    printf("Enter who you are:\n");
    printf("1) Single  2) Head of Household\n");
    printf("3) Married, Joint  4) Married, Sperate\n");
    printf("5) quit\n");
    while ((choice = getchar()) != '5')
    {
        switch(choice)
        {
            case '1' : who = SINGLE; 
                    break;
            case '2' : who =  HEAD_OF_HOUSEHOLD_BREAK;
                    break;
            case '3' : 
                    who = MARRIED_JOINT;
                    break;
            case '4' :
                    who = MARRIED_SEPERATE;
                    break;
            default :
                    flush_input_buffer();
                    printf("Enter 1-5 one of them\n");
                    continue;
        }
        printf("Enter the income:\n");
        scanf("%lf", &pay);
        if (pay <= who)
            printf("taxable income is $%.2lf\n", pay * BASIC_TAX);
        else 
            printf("taxable income is $%.2lf\n", who * BASIC_TAX + EXCCESS_TAX * (pay - who));
        printf("Enter another choice:\n");
        flush_input_buffer();
    }

    return 0;
}

void flush_input_buffer()
{
    while (getchar() !='\n')
        ;
}
