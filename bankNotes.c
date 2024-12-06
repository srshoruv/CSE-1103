#include <stdio.h>
 
int main() {
 
    double num;
    int n100,n50,n20,n10,n5,n2,n1, c50, c25, c10, c05, c01;
    scanf("%lf", &num);
    
    // notes
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
    num -= n1 * 1;

    // coins
    c50 = num / 0.50;
    num -= c50 * 0.50;
    c25 = num / 0.25;
    num -= c25 * 0.25;
    c10 = num / 0.10;
    num -= c10 * 0.10;
    c05 = num / 0.05;
    num -= c05 * 0.05;
    c01 = num / 0.01;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c05);
    printf("%d moeda(s) de R$ 0.01\n", c01);
    return 0;
}