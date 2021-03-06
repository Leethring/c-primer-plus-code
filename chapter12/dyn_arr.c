#include <stdio.h>
#include <stdlib.h>


int main()
{
    double * ptd;
    int max = 0;
    int number;
    int i = 0;

    puts("what is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered -- byt.");
        exit(EXIT_FAILURE);
    }
    ptd = (double * ) malloc(max * sizeof (double));
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE); 
    }
    puts("Enter the value (q to quit):");
    while(i < max && scanf("%lf", &ptd[i]) == 1)
        ++i;
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i <number; i++)
    {
        printf("%7.2f", ptd[i]);
        if(i % 7 == 6)
            putchar('\n');
    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);

    return 0;
}

