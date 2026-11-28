#include <stdio.h>
void main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;
    scanf("%d", &n);
    fp = fopen("student.txt", "w");
    if (fp == NULL) return;
    for (i = 0; i < n; i++) {
        scanf("%49s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");
    if (fp == NULL) return;
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3)
        printf("Name: %s Roll: %d Marks: %d\n",
               name, roll, marks);
    fclose(fp);
}
