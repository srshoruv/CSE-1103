#include <stdio.h>

int main()
{
    FILE *myFile;
    char filename[100];
    char str[100];
    fgets(filename,100,stdin);

    // Creating a file
    printf("Openning file\n");
    myFile = fopen(filename, "w");
    if (myFile == NULL)
    {
        printf("Error creating file...\n");
        return 1;
    }
    while ((str = gets()) != EOF)
    {
        fputs(str,myFile);
    }

    //Writing a file
}