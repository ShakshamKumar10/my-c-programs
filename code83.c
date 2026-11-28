#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    scanf("%49s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.joining.day,
          &e.joining.month, &e.joining.year);

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d/%02d/%04d\n",
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}
