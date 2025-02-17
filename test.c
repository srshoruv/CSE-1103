#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int count = 0;

    printf("Enter the number = ");
    scanf("%d",&n);

    int ncopyy = n;

    while(ncopyy!=0)
    {
        ncopyy = ncopyy / 10;
        count++;
    }

    int ncopy = n;
    int x;
    int sum = 0;

    while(ncopy!=0)
    {
        x = ncopy % 10;
        sum = sum + pow(x,count);
        ncopy = ncopy / 10;

    }
    if(sum == n)
    {
        printf("%d is an amrstrong number.\n",n);
    }
    else
    {
        printf("%d is not an amrstrong number.\n",n);
    }
}