/*************************************************************************
	> File Name: p11.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 07:42:31 AM UTC
 ************************************************************************/

#include<stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define SHIP_CHARGE_5 6.5
void flush_input_buffer(void);
#define SHIP_CHARGE_20 14
int main(void)
{
    double artichoke_pound, beet_pound, carrot_pound;
    double artichoke_pay, beet_pay, carrot_pay, total_pay, total_pound, pound, total_order_pay, total_discount, ship_charge;
    char choice;
    char YN;

    artichoke_pound = beet_pound = carrot_pound = artichoke_pay = beet_pay = carrot_pay = total_pay = total_pound = total_order_pay = 0;
    printf("----------|----------|---------\n");
    printf("Artichoke     beet      carrot \n");
    printf("%10.2lf %10.2lf %10.2lf", ARTICHOKE, BEET, CARROT);
    printf("Which one do you want to buy:\n");
    printf("a) artichoke b) beet c) carrot q) exit to ordering process\n");
    while ((choice = getchar()) != '#')
    {
        switch(choice)
        {
            case 'a' : 
                    printf("Enter how many pound of artichoke :\n");
                    scanf("%lf", &pound);
                    artichoke_pound += pound;
                    total_pound += pound;
                    flush_input_buffer();
                    continue;
            case 'b' :
                    printf("Enter how many pounds of beets :\n");
                    scanf("%lf", &pound);
                    beet_pound += pound;
                    total_pound += pound;
                    flush_input_buffer();
                    continue;
            case 'c' :
                    printf("Enter how many pounds of carrot :\n");
                    scanf("%lf", &pound);
                    carrot_pound += pound;
                    total_pound += pound;
                    flush_input_buffer();
                    continue;
            case 'q' : break;
            default : printf("Enter Which one do you want to buy:\n");
                    flush_input_buffer:
                    continue;
        }
        artichoke_pay = artichoke_pound * ARTICHOKE;
        beet_pay = beet_pound * BEET;
        carrot_pay = carrot_pound * CARROT;
        total_order_pay = artichoke_pound * ARTICHOKE + beet_pound * BEET + carrot_pound * CARROT; 
        if (total_order_pay > 100)
           total_discount = total_order_pay * DISCOUNT;
        if (total_pound <= 5)
            ship_charge = SHIP_CHARGE_5;
        else if (total_pound <= 14 )
            ship_charge = SHIP_CHARGE_20;
        else 
            ship_charge = SHIP_CHARGE_20 + (total_pound - SHIP_CHARGE_20) * 0.5;
        total_pay = total_order_pay + ship_charge - total_discount; 
        printf("Pound ordered: %.2lf", total_pound);
        printf("cost for artichoke : %.2lf \ncost for beet :%.2lf\n cost for carrot :%.2lf\n", artichoke_pay, beet_pay, carrot_pay);
        printf("The total cost of the order is %.2lf \nThe discount is %.2lf\nThe shipping charge is %.2lf \nThe grand total of all the charges is %.2lf\n", total_order_pay, total_discount, ship_charge, total_pay);
        printf("Do you want to continue shipping? (y to yes and n to no)\n");
        scanf("%c", &YN);
        if (YN = 'y')
            continue;
        else 
            break;
        
    }

    return 0;
}

void flush_input_buffer()
{
    while(getchar() != '\n')
        ;
}
