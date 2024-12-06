#include <stdio.h>
 
int main() {
 
    double sal, total;
    scanf("%lf", &sal);
 
    if ( sal <= 2000.00 && sal >= 0.00) 
    {
        printf("Isento\n");
    } 
    else if (sal >= 2000.01 && sal <= 3000.00)
    {
        sal = sal - 2000.00;
        total = sal * 0.08;
    }
    else if (sal >= 3000.01 && sal <= 4500.00) 
    {
        sal = sal - 3000.00;
        total = (sal * 0.18) + (1000*0.08);
    }
    else if (sal > 4500.00)
    {
        sal = sal - 4500.00;
        total = sal * 0.28 + (1000*0.08) + (1500*0.18);
    }
    
    printf("R$ %.2lf\n", total);
    return 0;
}