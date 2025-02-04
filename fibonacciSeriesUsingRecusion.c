#include <stdio.h>

int firstNum = 0;
int secondNum = 1;
int i = 0;

int fib(int n)
{
    int temp = firstNum;

    if (i >= n)
    {
        return temp;
    }
    
    printf("%d ", temp);
    firstNum += secondNum;
    secondNum = temp;
    i++;
    fib(n);
   
}

int main()
{
    int n;
    printf("Enter how many Fibonacci you want: ");
    scanf("%d", &n);
    fib(n);
}