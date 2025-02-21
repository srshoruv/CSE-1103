#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int year = 0, pa, pb;
        double ra, rb;
        scanf("%d %d %lf %lf", &pa, &pb, &ra, &rb);

        while (pa <= pb)
        {
            pa += (int) (pa * (ra/100));
            pb += (int) (pb * (rb/100));
            year++;

        }
        if (year >= 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n",year);
        }
        
    }
}