#include <stdio.h>
 
int main() {
 
    int x;
    scanf("%d", &x);
    
    int count = 0;
    
    while (count != 6)
    {
        if(x%2 == 1) {
            printf("%d\n",x);
            count++;
        }
        
        x++;
    }
 
    return 0;
}