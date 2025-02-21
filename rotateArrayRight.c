// rotating Array Right By K Position

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k;
    printf("Enter Kth Position: ");
    scanf("%d", &k);

    for (int i = n-k; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-k; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}