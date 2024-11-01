#include <stdio.h>

int main() {
    printf("Enter the ending number: ");
    int num;
    scanf("%d", &num);
    int sum = 0;
    int i=0;

    while (i <= num) {
        sum += i;
        i+= 2;
    }

    printf("%d \n", sum);
    
    return 0;
}