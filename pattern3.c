/*  printing pattern
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter How many Lines do you want: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            printf(" ");
        }
        for (int z = 0; z <= i; z++)
        {
            printf("*");
        }
        for (int z = 0; z < i; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}