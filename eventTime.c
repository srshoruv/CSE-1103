#include <stdio.h>

int main() {
    int day, finalD, hour, finalH, minute, finalM, second, finalS, ansD, ansH, ansM, ansS;

    scanf("Dia %d\n", &day);
    scanf("%d : %d : %d\n", &hour, &minute, &second);
    scanf("Dia %d\n", &finalD);
    scanf("%d : %d : %d", &finalH, &finalM, &finalS);

    ansD = finalD - day;
    
    if (finalH < hour) {
        ansH = (24 - hour) + finalH;
        ansD--;
    } else {
        ansH = finalH - hour;
    }

    if (finalM < minute) {
        ansM = (60 - minute) + finalM;
        ansH--;
    } else {
        ansM = finalM - minute;
    }

    if (finalS < second) {
        ansS = (60 - second) + finalS;
        ansM--;
    } else {
        ansS = finalS - second;
    }

    if (ansM < 0) {  // Fixing any underflow issues
        ansM += 60;
        ansH--;
    }

    if (ansH < 0) {  // Fixing any underflow issues
        ansH += 24;
        ansD--;
    }

    printf("%d dia(s)\n", ansD);
    printf("%d hora(s)\n", ansH);
    printf("%d minuto(s)\n", ansM);
    printf("%d segundo(s)\n", ansS);

    return 0;
}
