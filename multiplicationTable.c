#include <stdio.h>
 
int main() {
 
    int num, ans;
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        ans = i * num;
        printf("%d x %d = %d\n", i, num, ans);
    }
 
    return 0;
}