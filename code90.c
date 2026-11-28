#include <stdio.h>
void main() {
    FILE *fp;
    char str[100];
    fp = fopen("info.txt", "r");
    if (fp == NULL) return;
    while (fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);
    fclose(fp);
}
