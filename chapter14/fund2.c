#include <stdio.h>

#define FUNDLEN     50

//this is for fund2 change
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);

int main()
{
    struct funds stan = {
        "Garlic-Melon BanK",
        4032.27,
        "Lucky's Saving and Loan", 
        8543.94
    };
    
    printf("Stan has a total of $%.2f.\n", 
           sum(&stan));

    return 0;
}

double sum(const struct funds * money)
{
    return (money->bankfund + money->savefund);
}
