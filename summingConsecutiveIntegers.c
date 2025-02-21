#include <stdio.h>
 
int main() {
 
    int x,y, sum = 0;
    scanf("%d %d", &x, &y);

    while (y <= 0)
    {
        scanf("%d", &y); 
    }
        
    for (int i = 0; i < y; i++)
    {
        sum += (x+i);
    }

    printf("%d\n", sum);
 
    return 0;
}