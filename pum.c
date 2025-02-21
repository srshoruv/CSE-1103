#include <stdio.h>
 
int main() {
 
    int n, s = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", s++);
        }
        printf("PUM\n");
        s++;
    }
 
    return 0;
}