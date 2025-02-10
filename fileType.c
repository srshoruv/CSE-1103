#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char ch;

    // Writing to a file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to the file (press Ctrl+D to end):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }

    fclose(file);

    // Reading from a file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}