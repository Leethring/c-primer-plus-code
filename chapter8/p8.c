/*************************************************************************
	> File Name: p8.c
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Dec 2019 12:55:28 PM UTC
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
float get_float(void);
char get_first(void);
void flush_input_buffer(void);
int main(void)
{
    char choice;
    float num_1, num_2;
    bool add, subtract, multiply, divide;
    
    add = subtract = multiply = divide = false;
    while (1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add          s.subtract\n");
        printf("m. multiply     d. divide\n");
        printf("q. quit\n");
        choice = get_first();
        switch(choice)
        {
            case 'a' : add = true;
                    break;
            case 's' : subtract = true;
                    break;
            case 'm' :
                    multiply = true;
                    break;
            case 'd' :
                    divide = true;
                    break;
            case 'q' :
                    return 0;
            default : 
                    printf("Invalid value. Try again.\n");
                    continue;
        }
        printf("Enter first number: ");
        num_1 = get_float();
        printf("%.1f\n", num_1); 
        printf("Enter second number:\n");
        num_2 = get_float();
        while(num_2 == 0)
        {
            printf("Enter a number other than 0: ");
            num_2 = get_float();
            printf("%.1f\n", num_2); 
        }
        if (add)
            printf("%.1f + %.1f = %.1f\n", num_1, num_2, num_1 + num_2);
        if (subtract)
            printf("%.1f - %.1f = %.1f\n", num_1, num_2, num_1 - num_2);
        if (multiply)
            printf("%.1f * %.1f = %.1f\n", num_1, num_2, num_1 * num_2);
        if (divide)
            printf("%.1f / %.1f = %.1f\n", num_1, num_2, num_1 / num_2);
        add = subtract = multiply = divide = false;
        flush_input_buffer();
    }
}

char get_first(void)
{
    char ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}

float get_float(void)
{
    float input;
    char ch_1;

    while (scanf("%f", &input) != 1)
    {
        while ((ch_1 = getchar()) != '\n')
            putchar(ch_1);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: 1\n");
    }

    return input;
}

void flush_input_buffer(void)
{
    while (getchar() != '\n')
        ;
}
