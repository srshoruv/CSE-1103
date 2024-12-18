#include <stdio.h>
 
int main() {
 
    int testCase;
    scanf("%d", &testCase);

    double c = 0.0, r = 0.0, s = 0.0, total = 0.0;
    double pC, pR, pS;

    while (testCase)
    {
        double num;
        char name;
        scanf("%lf %c", &num, &name);
        
        total += num;

        if (name == 'C')
        {
            c += num;
        }
        else if (name == 'R')
        {
            r += num;
        }
        else if (name == 'S')
        {
            s += num;
        }

        testCase--;
    }

    pC = (c / total ) * 100;
    pR = (r / total ) * 100;
    pS = (s / total ) * 100;

    printf("Total: %.0lf cobaias\n", total);
    printf("Total de coelhos: %.0lf\n", c);
    printf("Total de ratos: %.0lf\n", r);
    printf("Total de sapos: %.0lf\n", s);

    printf("Percentual de coelhos: %.2lf %%\n",pC);
    printf("Percentual de ratos: %.2lf %%\n",pR);
    printf("Percentual de sapos: %.2lf %%\n",pS);
 
    return 0;
}