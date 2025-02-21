#include <stdio.h>

int main()
{
    int arr[1000];
    int x;
    scanf("%d", &x);
    
    for (int i = 0; i <= 1000; i++)
    {

        arr[i] = i % x;
    }

    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}