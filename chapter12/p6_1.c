#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void count(void);

int main(void)
{
    int i; 
    
    srand(time(0));
    for ( i = 0; i < 10 ; i++)
    {
        printf("run %d\n", i);
        count();
        printf("\nhear\n");
        putchar('\n');
    }


    return 0;
}


void count(void)
{
    int j = 0;
    int counts[10] = {0,0,0,0,0,0,0,0,0,0};
    while(j < SIZE)
    {
        const int roll = rand() % 10 + 1;
        counts[roll - 1]++;
        j++;
    }
    puts("Counts");
    for (int k = 0; k < 10; k++)
        printf("%5d : %5d", k + 1, counts[k]);
    printf("\nasdfasd\n");

}
