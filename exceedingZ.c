#include <stdio.h>
 
int main() {
 
    int x,y, sum = 0, counter = 0, i = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    while (y <= x)
    {
        scanf("%d", &y); 
    }
        
    while (sum < y)
    {
        sum += (x + i++);
        counter++;
    }

    printf("%d\n", counter);
 
    return 0;
}