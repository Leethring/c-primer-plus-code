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
int get_positive_int(void);
char get_first(void);
int main(void)
{
    double work_hour;
    double total_pay;
    double total_tax;
    int choices;
    double pay_rate, overtime_rate;

    printf("################################################################\n");
    printf("Enter the number corresonding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                         b) $9.33/hr\n");
    printf("c) $10.00/hr                       d) $11.20/hr\n");
    printf("q) quit\n");
    printf("################################################################\n");
    choices = get_first();
    while(choices != 'q')
    {
        switch (choices)
        {
            case 'a' : pay_rate =  PAY_RATE1;
                    break;
            case 'b' : pay_rate = PAY_RATE2;
                    break;
            case 'c' :pay_rate = PAY_RATE3;
                    break;
            case 'd' : pay_rate = PAY_RATE4;
                    break;
            default :printf("You should Enter a, b, c, d, or q\n");
                    choices = get_first();
                    continue;
        }
        overtime_rate = pay_rate * 1.5;
        printf("You get %lf pay rate\n", pay_rate);
        printf("Enter how long every week you work :\n");
        work_hour = get_positive_int(); 
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
        printf("################################################################\n");
        printf("Enter the number corresonding to the desired pay rate or action:\n");
        printf("a) $8.75/hr                         b) $9.33/hr\n");
        printf("c) $10.00/hr                       d) $11.20/hr\n");
        printf("q) quit\n");
        printf("################################################################\n");
        choices = get_first();
   }

    return 0;
}

char get_first(void)
{
    char ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}

int get_positive_int(void)
{
    int input;
    char ch1;

    while (1)
    {
        while (scanf("%d", &input) != 1)
        {
            while ((ch1 = getchar()) != '\n')
                putchar(ch1);
            printf(" is not an integer \nPlease enter a positive integer\n");
        }
        if (input > 0)
            break;
        else
        {
            while ((ch1 = getchar()) != '\n')
                putchar(ch1);
            printf("%d is a nagative integer\nPlease enter a positive integer\n", input);
        
        }
    }

    return input;
}
