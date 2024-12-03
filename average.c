#include <stdio.h>
 
int main() {
 
    double a,b,avg;
    scanf("%lf %lf", &a, &b);
    
    avg = (double) (a + b)/2;
    printf("MEDIA = %.5lf\n", avg);
 
    return 0;
}