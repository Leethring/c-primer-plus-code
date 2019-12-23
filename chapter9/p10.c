/*************************************************************************
	> File Name: p10.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Dec 2019 12:58:49 PM UTC
 ************************************************************************/

#include<stdio.h>
void to_base_n(long n, int base);

int main(void)
{
    long number;
    int base_main;

    printf("Enter two integer , the second one should in range 2 to 10, and we will display the first number base on second one .\n");
    while (scanf("%lu %d", &number, &base_main) ==2 )
    {
        printf("In %d base the %ld is ", base_main, number);
        to_base_n(number, base_main);
        printf("\n");
        printf("Enter another one ");
        
    }
    printf("Bye \n");

    return 0;

}

void to_base_n(long n, int base)
{
    int r;
  
    if (base < 2 || base >10)
    {
        printf("Error: base must be between 2 and 10.");
        return ;
    }
    if (n == 0) return;
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    printf("%d", r);
}
