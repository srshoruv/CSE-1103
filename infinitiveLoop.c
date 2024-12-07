#include <stdio.h>

int main()
{
    int x = 10, y = 2;

    int i = 0;

    while(x+y)
    {
        printf("%d) X = %d , Y = %d\n",i, x--,y--);
        i++;
    }

    return 0;
}