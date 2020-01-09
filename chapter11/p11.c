/*************************************************************************
	> File Name: p11.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Jan 2020 05:18:49 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define COUNT 10
#define LIMIT 50

void sort_ASCII(char * string[], int n);
void sort_length(char * string[], int n);
int fwlen(char *string);
void sort_firstword_length(char * string[], int n);
char * get(char * string, int n);
void print_menu(void);

int main(void)
{
    char strings[COUNT][LIMIT];
    char * strptrs[COUNT];
    char * success;
    char ch;

    for (int i = 0; i < COUNT; i++)
        strptrs[i] = strings[i];

    printf("Enter up to 10 strings (EOF to stop): \n");

    for (int i = 0; i < COUNT; i++)
    {
        printf("%d: ", i + 1);
        success = get(strings[i] , LIMIT);
        if(!success)
            break;
    }
    printf("\n");

    print_menu();
    while ((ch = getchar()) != 'q')
    {
        if(ch != '\n')
            while (getchar() != '\n')
                continue;
        switch(ch)
        {
            case 'a' :
                    sort_ASCII(strptrs, COUNT);
                    break;
            case 'b' :
                    sort_length(strptrs, COUNT);
                    break;
            case 'c' :
                    sort_firstword_length(strptrs, COUNT);
                    break;
            case 'o' :
                    break;
            default:
                    printf("Invalid input. Try again. \n\n");
                    print_menu();
                    continue;
        }
        puts("");
        for (int i = 0; i < COUNT; i++)
            puts(strptrs[i]);
        puts("");
        print_menu();
    }
    puts("bye");
    
    return 0;

}

void sort_ASCII(char * strings[], int n)
{
    char * tmp;
    for (int i = 0; i < n -1; i++)
        for (int j = i + 1; j < n; j++)
    {
        if(strcmp(strings[i], strings[j]) > 0)
        {
            tmp = strings[i];
            strings[i] = strings[j];
            strings[j] = tmp;
        }
    }
}

void sort_length(char * strings[], int n)
{
    char * tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(strlen(strings[i]) > strlen(strings[j]))
            {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
            
        }
    }
}

int fwlen(char * string)
{
    int length = 0;
    while (isspace(*string))
        string++;

    while (!isspace(*string))
    {
        length++;
        string++;
    }
    return length;
}

void sort_firstword_length(char *string[], int n)
{
    char * tmp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(fwlen(string[i]) > fwlen(string[j]))
            {
                tmp = string[i]; 
                string[i] = string[j];
                string[j] = tmp;

            }
        }
    }
}

char * get(char *string, int n )
{
    char * return_value = fgets(string, n , stdin);

    while (*string != '\0')
    {
        if(*string == '\n')
        {
            *string = '\0';
            break;
        }
        string++;
    }

    return return_value;
}

void print_menu(void)
{
    puts("Choose an option:");
    puts("o) Print strings in original order.");
    puts("a) Print stirngs in ASCII collating sequence.");
    puts("b) Print strings ordered by length.");
    puts("c) Print strings ordered by length of the first word.");
    puts("q) quit.");
    puts("");
    puts("Enter a character:");
}


