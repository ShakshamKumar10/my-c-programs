#include <stdio.h>

enum Number {
    A = 10,
    B = 20,
    C = 30
};

int main() {
    enum Number n1 = A;
    enum Number n2 = B;
    enum Number n3 = C;

    printf("A = %d\n", n1);
    printf("B = %d\n", n2);
    printf("C = %d\n", n3);

    return 0;
}
