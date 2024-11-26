#include <stdio.h>


int main()
{   int mark;
    printf("Enter your mark: ");
    if(!scanf("%d", &mark))
    {
        printf("Invalid input \n");
        return 0;
    }

    if (mark >= 80 && mark <= 100)
    {
        printf("Congratulations! You've Got A+! \n");
    }
    else if (mark >= 75 && mark < 80)
    {
        printf("You've Got A \n");
    }
    else if (mark >= 70 && mark < 74)
    {
        printf("You've Got A- \n");
    }
    else if (mark >= 65 && mark < 70)
    {
        printf("You've Got B+ \n");
    }
    else if (mark >= 60 && mark < 65)
    {
        printf("You've Got B \n");
    }
    else if (mark >= 55 && mark < 60)
    {
        printf("You've Got B- \n");
    }
    else if (mark >= 50 && mark < 55)
    {
        printf("You've Got C+ \n");
    }
    else if (mark >= 45 && mark < 50)
    {
        printf("You've Got C \n");
    }
    else if (mark >= 40 && mark < 45)
    {
        printf("You've Got D \n");
    }
    else if (mark >= 0 && mark < 40)
    {
        printf("You're Fail! \n");
    } 
    else if ( mark > 100)
    {
        printf("The maximum must be calculated within 100 \n");
    }
    else 
    {
        printf("Negative numbers cannot be graded! \n");
    }

    return 0;
}

