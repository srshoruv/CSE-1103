#include <stdio.h>
 
int main() {
 
    int arr[100];
    int max;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    int pos = 0;;

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", pos);
 
    return 0;
}