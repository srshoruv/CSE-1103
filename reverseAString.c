/* Write a C program that can input a string
(white space included) and output the charaters
in reverse order*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for (int i = strlen(str)-1; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }
    
}