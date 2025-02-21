#include <stdio.h>

int main()
{
    int arr[20];
    
    for (int i = 19; i >= 0; i--)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}