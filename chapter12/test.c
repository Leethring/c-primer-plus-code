#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int counts[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < 100; i++)
    {
        int same = rand() % 10 + 1;
        printf("%d ", same);
        counts[same - 1]++;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%3d :  %3d", j, counts[j]);
    }
    return 0;
}

