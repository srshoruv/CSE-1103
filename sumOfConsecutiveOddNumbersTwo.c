#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int x,y, sum = 0;
        scanf("%d %d", &x, &y);
    

    if (x > y)
    {
        x--;
        while (x > y)
        {
            if (x % 2 == 1)
            {
                sum += x;
            }
            x--;
        }
    }

    else
    {
        y--;
        while (y > x)
        {
            if (y % 2 == 1)
            {
                sum += y;
            }
            y--;
        }
    }

    printf("%d\n", sum);

    }
    
    

    return 0;
}