#include <stdio.h>
 
int main() {
 
    int day, finalD, hour, finalH, minute, finalM, second, finalS, ansD, ansH, ansM, ansS;
    scanf("Dia %d\n", &day);
    scanf("%d : %d : %d\n", &hour, &minute, &second);
    scanf("Dia %d\n", &finalD);
    scanf("%d : %d : %d", &finalH, &finalM, &finalS);
    
    ansD = finalD - day;
    if (finalH == 0) 
    {
        finalH = 24;
        ansD--;
    }
    if (hour > finalH)
    {
        ansH = (24-hour) + finalH;
        ansD--;
    }
    else 
    {
        ansH = finalH - hour;
    }
    if (finalM == 0) 
    {
        finalM = 60;
        ansH--;
    }
    if (minute > finalM)
    {
        ansM = (60 - minute) + finalM;
        ansH--;
    }
    else 
    {
        ansM = finalM - minute;
    }
    if (finalS == 0) 
    {
        finalS = 60;
        ansM--;
    }

    if (second > finalS)
    {
        ansS = (60 - second) + finalS;
        ansS--;
    }
    else 
    {
        ansS = finalS - second;
    }

    printf("%d dia(s)\n", ansD);
    printf("%d hora(s)\n", ansH);
    printf("%d minuto(s)\n", ansM);
    printf("%d segundo(s)\n", ansS);



 
    return 0;
}