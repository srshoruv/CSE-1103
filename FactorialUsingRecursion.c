// Implementing Factorial using Recursive Function
#include <stdio.h>

int factorial(int n)
{
    if ( n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int num;
    printf("Enter a number to calculate: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial cannot be calculated of a Negative Number!\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}