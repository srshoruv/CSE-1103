#include <stdio.h>

int main() {
    double S = 0.0;
    double numerator = 1.0, denominator = 1.0;

    while (numerator <= 39) {
        S += numerator / denominator;
        numerator += 2;
        denominator *= 2;
    }

    printf("%.2lf\n", S);

    return 0;
}