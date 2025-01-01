#include <stdio.h>

int main()
{
    

    while (1)
    {
        int x,y, sum = 0;
        scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
    {
        return 0;
    }

    if (x > y)
    {
        while (y <= x)
        {
            printf("%d ", y);
            sum += y;
            y++;
        }
        
    }

    else
    {
        while (x <= y)
        {
            printf("%d ", x);
            sum += x;
            x++;
        }
        
        
    }
        printf("Sum=%d\n", sum);

    }
    
    

    return 0;
}