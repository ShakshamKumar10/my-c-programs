#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while(fscanf(fp, "%d", &num) != EOF)
    {
        sum = sum + num;
        count++;
    }

    if(count > 0)
        average = (float)sum / count;
    else
        average = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    fclose(fp);

    return 0;
}
