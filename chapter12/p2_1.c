#include <stdio.h>
#include "exercise02.h"


int main()
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode:");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done!");

    return 0;
}

