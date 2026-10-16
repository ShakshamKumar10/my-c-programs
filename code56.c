#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int maxLength = 0;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i; j < n; j++) {
            int repeated = 0;

            for (int k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeated = 1;
                    break;
                }
            }

            if (repeated)
                break;

            count++;
        }

        if (count > maxLength)
            maxLength = count;
    }

    printf("%d", maxLength);

    return 0;
}
