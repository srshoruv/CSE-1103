#include <stdio.h>
 
int main() {
 
   int testCase;
   scanf("%d", &testCase);
   
   while (testCase)
   {
       double a, b, c, avg;
       scanf("%lf %lf %lf", &a, &b, &c);
       
       avg = ((a * 2) + (b * 3) + (c * 5)) / 10;
       printf("%.1lf\n", avg);
       
       testCase--;
   }
 
    return 0;
}