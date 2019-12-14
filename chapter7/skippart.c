/*************************************************************************
	> File Name: skippart.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Dec 2019 12:16:57 PM UTC
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    const float MIN = 0.0;
    const float MAX = 100.0;

    float score;
    int n = 0;
    float total = 0.0f;
    float min = MAX;
    float max = MIN;

    printf("Enter a first scores (q to quit):\n");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score >MAX)
        {
            printf("%.1f is not a valid value. Try again: ", score);
            continue;
        }
        printf("Accepting %.1f :\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;

        total += score;
        n++;
        printf("Enter next score (q to quit):\n");
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f \n", n, total / n);
        printf("Low = %.1f , high = %.1f \n", min, max);

    }
    else
        printf("No valid scores were entered.\n");

    return 0;
}
