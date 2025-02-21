#include <stdio.h>
 
int main() {
 
    int testCase;
    scanf("%d", &testCase);

    while (testCase)
    {
        int sum = 0;

        if (testCase % 2 != 0)
        {
            ++testCase;
        }

        for (int i = 0; i < 5; i++)
        {
            sum += testCase;
            testCase += 2;
        }
        printf("%d\n", sum);
        scanf("%d", &testCase);
    }
    
 
    return 0;
}