#include <stdio.h>
 
int main() {
 
    int x = 0, alc = 0, gas = 0, die = 0;
    while ( x != 4)
    {
        scanf("%d", &x);

        if (x == 1)
        {
            alc++;
        }
        else if (x == 2)
        {
            gas++;
        }
        else if (x == 3)
        {
            die++;
        }
         
    }

printf("MUITO OBRIGADO\n"); 
printf("Alcool: %d\n",alc);
printf("Gasolina: %d\n", gas);
printf("Diesel: %d\n", die);
 
    return 0;
}