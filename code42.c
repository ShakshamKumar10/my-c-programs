#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;
    int found = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (int i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        // Sum from x to n
        for (int i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            found = x;
            break;
        }
    }

    printf("%d", found);

    return 0;
}
