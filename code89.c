#include <stdio.h>
void main() {
    FILE *fp;
    char text[100];
    fp = fopen("info.txt", "w");
    if (fp == NULL) return;
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
}
