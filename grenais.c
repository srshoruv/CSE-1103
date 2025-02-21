#include <stdio.h>

int main()
{
    int x = 0, grenais = 0, inter = 0, gremio = 0, empates = 0;

    int team1, team2;
            scanf("%d %d", &team1, &team2);

            grenais++;

            if (team1 > team2)
            {
                inter++;
            }
            else if ( team1 < team2)
            {
                gremio++;
            }
            else
            {
                empates++;
            }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &x);

    while (x != 2)
    {

        if (x == 1)
        {
            int team1, team2;
            scanf("%d %d", &team1, &team2);

            grenais++;

            if (team1 > team2)
            {
                inter++;
            }
            else if ( team1 < team2)
            {
                gremio++;
            }
            else
            {
                empates++;
            }
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);

    }

    printf("%d grenais\n",grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (gremio > inter)
    {
        printf("Gremio venceu mais\n");
    }
    else if (inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    return 0;
}