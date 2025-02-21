#include <stdio.h>

int main()
{
    int x,y, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if ( x < y)
    {
        for (int i = x; i <= y; i++)
    {
        if ( i % 13 != 0)
        {
            sum += i;
        }
    }
    }
    else if ( x > y)
    {
        for (int i = y; i <= x; i++)
    {
        if ( i % 13 != 0)
        {
            sum += i;
        }
    }
    }

    printf("%d\n", sum);
}