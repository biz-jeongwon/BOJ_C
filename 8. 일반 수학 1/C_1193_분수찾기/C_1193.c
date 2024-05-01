#include <stdio.h>

int main()
{
    int X, L, r1 = 2, r2 = 3;

    scanf("%d", &X);

    if (X == 1)
    {
        printf("1/1");

        return 0;
    }

    for (int i = 1; ; i++)
    {
        if (X >= r1 && X <= r2)
        {
            L = i;

            break;
        }

        r1 += i + 1;
        r2 += i + 2;
    }

    if (L % 2 == 1)
        printf("%d/%d", (L + 2) - (r2 - X) - 1, (L + 2) - (X - r1) - 1);
    else
        printf("%d/%d", (L + 2) - (X - r1) - 1, (L + 2) - (r2 - X) - 1);
}