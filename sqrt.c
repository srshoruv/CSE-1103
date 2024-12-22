#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter A B C: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (b*b) - (4 * a * c);
    d = sqrt(d);

    x1 = (-b+d) / (2*a);
    x2 = (-b-d) / (2*a);

    printf("X1 = %lf \n", x1);
    printf("X2 = %lf \n", x2);

    return 0;
}