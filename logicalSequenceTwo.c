#include <stdio.h>
 
int main() {
 
    int x,y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y;)
    {
        for (int j = 0; j < x; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%d", i++);
        }
        printf("\n");
    }
 
    return 0;
}