#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int max = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

    if (max == a)
    {
        if (b + c > a)
            printf("%d", max + b + c);
        else
            printf("%d", (2 * b) + (2 * c) - 1);
    }
    else if (max == b)
    {
        if (a + c > b)
            printf("%d", max + a + c);
        else
            printf("%d", (2 * a) + (2 * c) - 1);
    }
    else
    {
        if (a + b > c)
            printf("%d", max + a + b);
        else
            printf("%d", (2 * a) + (2 * b) - 1);
    }
}