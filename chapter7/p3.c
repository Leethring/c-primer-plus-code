/*************************************************************************
	> File Name: p3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Dec 2019 02:12:07 AM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int num;
    int even_num, odd_num, even_total, odd_total;
    
    even_num = odd_num = even_total = odd_total = 0;
    printf("Enter integer:( 0 stop ):\n");
    while(scanf("%d", &num) == 1)
    {
        if (num == 0)
            break;
        else if (num % 2 == 0)
        {
            even_num++;
            even_total += num;
        }
        else 
        {
            odd_num++;
            odd_total += num;
        }

    }
    printf("The total even numble is %d, the average value is %.2f, the total odd value is %d, the average value is %.2f\n", even_total, (float) even_total / (float) even_num, odd_total, (float) odd_total / (float) odd_num);

    return 0;
}
