#include <stdio.h>

int main()
{
    char ch[5];

    for (int i = 0; i < 5; i++)
    {
        ch[i] = getchar();
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        putchar(ch[i]);
    }

    return 0;
}