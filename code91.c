#include <stdio.h>
void main() {
    FILE *fp, *fq;
    int ch;
    fp = fopen("source.txt", "r");
    if (fp == NULL) return;
    fq = fopen("destination.txt", "w");
    if (fq == NULL) {
        fclose(fp);
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        fputc(ch, fq);
    printf("File copied successfully");
    fclose(fp);
    fclose(fq);
}
