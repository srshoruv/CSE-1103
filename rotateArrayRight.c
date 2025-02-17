#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 1;

    // 1 2 3 4 5
    // 4 5 1 2 3
    for (int i = k+1; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i <= k; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}