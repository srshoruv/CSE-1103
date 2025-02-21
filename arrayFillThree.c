#include <stdio.h>

int main()
{
    double arr[10];
    double x;
    scanf("%lf", &x);

    arr[0] = x;

    for (int i=1; i<100; i++)
    {
        arr[i] = arr[i-1] / 2;
    }

    for (int i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, arr[i]);
    }

    return 0;
    
}