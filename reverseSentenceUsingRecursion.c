// Reversing A string Using Recursion

#include <stdio.h>
#include <string.h>

int reverse(char str[], int n);

int main()
{
    char sent[100];
    printf("Enter a string to reverse: ");
    gets(sent);

    reverse(sent, strlen(sent) - 1);
    printf("\n");
}

int reverse(char str[], int n)
{
    if (n < 0)
    {
        return 0;
    }

    printf("%c", str[n]);
    reverse(str,n - 1);
}