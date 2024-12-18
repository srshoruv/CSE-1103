#include <stdio.h>
 
int main() {
 
    for (double i = 0; i <= 2; i += 0.2)
    {
        for (double k = 3, j = 1+i; k >= 1; k--, j++)
        {
            if (j == (int) j)
            {
                printf("I=%.0lf J=%.0lf\n", i , j);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", i , j);
            }
            
        }
    }
 
    return 0;
}