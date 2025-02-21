#include <stdio.h>

int main()
{
    int arr[10];
    int x, prev = 0;
    scanf("%d", &x);

    arr[0] = x;

    for (int i=1; i<10; i++)
    {
        arr[i] = arr[i-1] * 2;
    }

    for (int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
    
}