#include <stdio.h>
#include "p7.h"
void clear_input_stream(void);

int main()
{
    int sets, dice, sides;

    puts("enter the number of sets; enter q to stop.\n");
    while (scanf("%d", &sets) == 1 && sets > 0)
    {
        dice = sides = -1;
        printf("How many sides and how many dice?");
        scanf("%d %d ", &sides, &dice);
        while (dice < 0 || sides < 0)
        {
            clear_input_stream();
            puts("Invalid input, positive integers only.");
            puts("How many sides and how many dice?");
            scanf("%d %d", &sides, &dice);
        }
        
        dicerolls(sets, dice, sides);
        clear_input_stream();
        puts("How many sets? enter q to stop.");
    }
    return 0;
}

void clear_input_stream(void)
{
    while (getchar() != '\n')
        continue;
}
