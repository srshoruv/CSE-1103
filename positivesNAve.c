#include <stdio.h>
 
int main() {
 
    double sum = 0, avg;
    int count = 0;

    
    for (int i=0; i<6; i++) {
        double x;
        scanf("%lf", &x);
        
        if (x > 0) {
            sum += x;
            count++;
        }
    }

    avg = sum / count;

    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);
 
    return 0;
}