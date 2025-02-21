#include <stdio.h>
 
int main() {
 
    int y, sum = 0, counter = 0;
    double i = 0;
    scanf("%d", &y);

    while (y >= 0)
    {
        sum += y;
        counter++;
        scanf("%d", &y);
    }
    i = (double) sum / counter;
    printf("%.2lf\n", i);
 
    return 0;
}