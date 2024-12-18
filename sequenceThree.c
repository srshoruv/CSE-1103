#include <stdio.h>
 
int main() {
 
    for (int i = 1; i <= 9; i += 2)
    {
        for (int k = 3, j = 7+i-1; k >= 1; k--, j--)
        { 
            printf("I=%d J=%d\n", i , j);
        }
    }
 
    return 0;
}