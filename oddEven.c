#include <stdio.h>
 
int main() {
 
   int testCase;
   scanf("%d", &testCase);
   
   while (testCase)
   {
       int num;
       scanf("%d", &num);
       
       if (num % 2 == 0)
       {
           if (num > 0)
           {
               printf("EVEN POSITIVE\n");
           }
           else if (num < 0)
           {
               printf("EVEN NEGATIVE\n");
           }
           else
           {
               printf("NULL\n");
           }
       }
       else
       {
          if (num > 0)
           {
               printf("ODD POSITIVE\n");
           }
           else
           {
               printf("ODD NEGATIVE\n");
           } 
       }
       testCase--;
   }
 
    return 0;
}