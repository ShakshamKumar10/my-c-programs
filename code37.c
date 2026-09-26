#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start = 0, end, j;
    char temp;

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            for (j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
