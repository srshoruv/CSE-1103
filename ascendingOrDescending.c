#include <stdio.h>

int main()
{
    

    while (1)
    {
        int x,y;
        scanf("%d %d", &x, &y);

    if (x == y)
    {
        return 0;
    }

    if (x > y)
    {
        printf("Decrescente\n");
        
    }

    else
    {
        printf("Crescente\n");
        
        
    }

    }
    
    

    return 0;
}