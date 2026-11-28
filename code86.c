#include <stdio.h>
void main() {
    FILE *fp;
    char name[100], ch;
    scanf("%99s", name);
    fp = fopen(name, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!");
        return;
    }
    printf("File opened successfully.\n");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
}
