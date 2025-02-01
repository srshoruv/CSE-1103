// Implementing Factorial using Loop
#include <stdio.h>

int main()
{
    int num, fact = 1;
    printf("Enter a number to calculate: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        fact = 1;
    }
    else if (num > 0)
    {
        for (int i = 2; i <= num; i++)
        {
        fact *= i;
        }
    }  
    else
    {
        printf("Factorial cannot be calculated of a Negative Number!\n");
        return 0;
    }
    printf("Factorial of %d is %d\n", num, fact);
    

    return 0;
}