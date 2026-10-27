#include <stdio.h>

void appendFile()
{
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");
}
