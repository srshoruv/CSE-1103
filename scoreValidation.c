#include <stdio.h>

int calculate();

int main()
{
    int x = 0;
    calculate();
    

    while (x != 2)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);

        if (x == 1)
        {
            calculate();
        }
    }
    return 0;
}

int calculate()
{
    int n = 0;
    double ans = 0, sum = 0;

    while (n != 2)
    {
        double num;
        scanf("%lf", &num);

        if (num < 0 || num > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum += num;
            n++;
        }
    }
    ans = (double) sum / 2;
    printf("media = %.2lf\n", ans);
}