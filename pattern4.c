/*  printing pattern
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter How many Lines do you want: ");
    scanf("%d", &n);

    // upper pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
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

    // lower pattern
    for (int i = 1; i < n; i++)
    {
        
        for (int j = 0; j < i ; j++)
        {
            printf(" ");
        }
        for (int z = n; z > i; z--)
        {
            printf("*");
        }
        for (int z = n-1; z > i; z--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}