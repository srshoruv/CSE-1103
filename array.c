#include <stdio.h>
int main()
{
    int marks[5];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Elements of the array are: ");
    
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ",marks[i]);
    }

    return 0;
    
}