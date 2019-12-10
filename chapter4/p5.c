/*************************************************************************
	> File Name: p5.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Dec 2019 11:56:28 AM UTC
 ************************************************************************/

#include<stdio.h>
#define BYTE_BIT 8

int main(void)
{
    float megabits, megabytes;
    printf("Please tell me the download speed and the size of file:\n");
    scanf("%f %f", &megabits, &megabytes);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", megabits, megabytes);
    printf("downloads in %.2f seconds.\n", megabytes * BYTE_BIT / megabits);

    return 0;
    
}
