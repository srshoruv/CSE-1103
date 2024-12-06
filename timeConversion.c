#include <stdio.h>
 
int main() {
 
    int time, hours, minutes;
    scanf("%d", &time);
    
    hours = time / 3600;
    time -= hours * 3600;
    
    minutes = time / 60;
    time -= minutes * 60;
    
    printf("%d:%d:%d\n", hours, minutes, time);
 
    return 0;
}