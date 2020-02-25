#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SLEN 81

void get(char * string, int n);

int main()
{
    int ch;
    FILE * fsource;
    FILE * fdest;
    char source[SLEN];
    char destination[SLEN];
    
    printf("Enter the source file name.\n");
    get(source, SLEN);
    printf("Enter the desination file name.\n");
    get(destination, SLEN);

    if((fsource = fopen(source, "r")) == NULL)
    {
        fprintf(stderr, "Couldn't open %s file for read \n", source);
        exit(EXIT_FAILURE);
    }
    if((fdest = fopen (destination, "w")) == NULL)
    {
        fprintf(stderr, "Couldn't open %s file for write\n", destination);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fsource)) != '\\')
    {
        if (islower(ch))
            ch = toupper(ch);
        putc(ch, fdest);
    }

    fclose(fsource);
    fclose(fdest);

    return 0;
}

void get(char * string, int n)
{
    fgets(string, n, stdin);

    while(*string != '\0')
    {
        if (*string == '\n')
        {
            *string = '\0';
            break;
        }
        string++;
    }
}
