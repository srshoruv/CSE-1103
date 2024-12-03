#include <stdio.h>
 
int main() {
 
    int num,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d", &num);
    
    printf("%d\n", num);
    
    n100 = num / 100;
    num -= n100 * 100;
    n50 = num / 50;
    num -= n50 * 50;
    n20 = num / 20;
    num -= n20 * 20;
    n10 = num / 10;
    num -= n10 * 10;
    n5 = num / 5;
    num -= n5 * 5;
    n2 = num / 2;
    num -= n2 * 2;
    n1 = num / 1;
    num -= n10 * 10;

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    
    return 0;
}