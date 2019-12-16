/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 03:23:48 AM UTC
 ************************************************************************/

#include<stdio.h>
#define TAX_RATE 0.15
#define PAY_RATE1 8.75
#define PAY_RATE2 9.33 
#define PAY_RATE3 10.00 
#define PAY_RATE4 11.20 
#define TAX_RATE_NEXT 0.20
#define TAX_RATE_REST 0.25
#define EXCESS_HOUR 40
#define BREAK1 300
#define BREAK2 450
int main(void)
{
    double work_hour;
    double total_pay;
    double total_tax;
    int choices;
    double pay_rate, overtime_rate;

    printf("################################################################\n");
    printf("Enter the number corresonding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                         2) $9.33/hr\n");
    printf("3) $10.00/hr                       4) $11.20/hr\n");
    printf("################################################################\n");
    while((choices = getchar()) != 5)
    {
        switch (choices)
        {
            case 1 : pay_rate =  PAY_RATE1;
                    break;
            case 2 : pay_rate = PAY_RATE2;
                    break;
            case 3 :pay_rate = PAY_RATE3;
                    break;
            case 4 : pay_rate = PAY_RATE4;
                    break;
            default :printf("You should Enter 1-5 one of them:\n");
                    continue;
        }
        overtime_rate = pay_rate * 1.5;
        printf("Enter how long every week you work :\n");
        while (scanf("%lf", &work_hour) == 1)
        {
            if (work_hour <= 40)
            {
                total_pay = work_hour * pay_rate;
                printf("This week gross pay is $%.2lf\n", total_pay);
            }
            else 
            {
                total_pay = (work_hour - EXCESS_HOUR) * overtime_rate + pay_rate * EXCESS_HOUR;
                printf("This week gross pay is $%.2lf\n", total_pay);
            }
            if (total_pay < 300)
            {
                printf("This week you should pay $%lf for tax\n", total_pay * TAX_RATE);
            }
            else if (total_pay < BREAK2)
            {
                total_tax = (total_pay - 300) * TAX_RATE_NEXT + (BREAK1 * TAX_RATE);
                printf("This week you should pay $%lf for tax\n", total_tax);
            }
            else 
            {
                total_tax = (total_pay - 400) * TAX_RATE_REST + BREAK1 * TAX_RATE + (BREAK2 - BREAK1) * TAX_RATE_NEXT;
                printf("This week you should pay $%lf for tax\n", total_tax);
            }
        }
        printf("################################################################\n");
        printf("Enter the number corresonding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                         2) $9.33/hr\n");
        printf("3) $10.00/hr                       4) $11.20/hr\n");
        printf("################################################################\n");
    }

    return 0;
}
