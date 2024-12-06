#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    int x = 1;

    while (x <= n) 
    {
        if (x%2 == 0)
        {
            int ans = x*x;
            printf("%d^2 = %d\n",x,ans);
        }
        x++;
    }
 
    return 0;
}