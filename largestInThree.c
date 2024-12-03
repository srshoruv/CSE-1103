#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a,b,c,ans;
    scanf("%d %d %d", &a, &b, &c);
    
    ans = ((a+b+(abs(a-b))))/2;
    
    printf("%d eh o maior\n", ans);
 
    return 0;
}