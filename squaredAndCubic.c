#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
    
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d", i*i*i);
        printf("\n");
    }
 
    return 0;
}