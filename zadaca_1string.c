//1. One string (with a max of 100 chars) is read from SI.
// Transform the string so the left and the right half of the string will switch their places.
//Note: All test cases will have an even number of chars.
//In C

#include<stdio.h>
#include<string.h>
int main ()
{
    char string[100];
    char string1[100];
    scanf("%s",string);
    int n = strlen(string);
    strcpy(string1,string+n/2);
    strncat(string1,string,n/2);
    puts(string1);

        return 0;
}