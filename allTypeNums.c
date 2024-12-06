#include <stdio.h>
 
int main() {
 
    int countEven = 0, countOdd = 0, countPos = 0, countNeg = 0;
    

    
    for (int i=0; i<5; i++) {
        int x;
        scanf("%d", &x);
        
        if (x%2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        if (x > 0) {
            countPos++;
        } else if (x < 0) {
            countNeg++;
        }
    }

    printf("%d valor(es) par(es)\n", countEven);
    printf("%d valor(es) impar(es)\n", countOdd);
    printf("%d valor(es) positivo(s)\n", countPos);
    printf("%d valor(es) negativo(s)\n", countNeg);
 
    return 0;
}