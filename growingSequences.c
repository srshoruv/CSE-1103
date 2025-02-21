#include <stdio.h>
 
int main() {
 
    int x;
    scanf("%d", &x);

    while (x)
    {
      for (int j = 1; j <= x;)
        {
            if (j > 1)
                printf(" ");
            printf("%d", j++);
        }
        printf("\n");
        scanf("%d", &x);
    
    }

    
 
    return 0;
}