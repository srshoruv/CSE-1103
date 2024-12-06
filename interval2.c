#include <stdio.h>
 
int main() {
 
    int testCase, countIn = 0, countOut = 0;
    scanf("%d", &testCase);

    while (testCase)
    {
        int x;
        scanf("%d", &x);
        if (x >= 10 && x <= 20) 
        {
            countIn++;
        }
        else 
        {
            countOut++;
        }

        testCase--;
    }

    printf("%d in\n", countIn);
    printf("%d out\n",countOut);
 
    return 0;
}