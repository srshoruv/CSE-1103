#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);

    // int n = strlen(str);

    // for (int i = 0, j = n-1; i >= n/2, j > n/2; i++, j--)
    // {
    //     if (str[i] != str[j])
    //     {
    //         printf("Not Palindrome\n");
    //         return 0;
    //     }
    // }

    char revStr[100] = strrev(str);

    if (strcmp(str, strrev(str)) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    printf("Palindrome\n");

    return 0;
}