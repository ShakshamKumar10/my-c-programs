#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    // Print answer array
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]");

    return 0;
}
