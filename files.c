#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter File Name: ");
    gets(filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("File does not exist.\n");
    }

    fclose(file);

    printf("Creating a new One.\n");
    file = fopen(filename, "w");
    printf("Enter Your Text here: (Ctrl + D to Exit)\n");
    
    while ((ch = getchar()) != EOF)
    {
        fputc(ch,file);
    }

    fclose(file);

    // Reading file

    file = fopen(filename, "r");

    printf("Text of the file is:\n");
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);

}