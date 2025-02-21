#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x, y;
        double ans;
        scanf("%d %d", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            ans = (double) x / y;
            printf("%.1lf\n", ans);
        }

        
    }

    return 0;
}