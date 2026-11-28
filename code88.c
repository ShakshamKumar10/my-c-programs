#include <stdio.h>
void main() {
    FILE *fp;
    int n, sum = 0, count = 0;
    float avg;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) return;
    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    avg = count ? (float)sum / count : 0;
    printf("Sum: %d\nAverage: %.2f", sum, avg);
    fclose(fp);
}
