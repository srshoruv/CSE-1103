#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int temp = i, temp2 = i*i, temp3 = i*i*i;
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d", i*i*i);
        printf("\n");

        printf("%d ", temp);
        printf("%d ", temp2+1);
        printf("%d", temp3+1);
        printf("\n");
    }
 
    return 0;
}