#include <stdio.h>

int main()
{
    int a1, a0, c, n0;

    scanf("%d%d%d%d", &a1, &a0, &c, &n0);

    if (a1 * n0 + a0 <= c * n0 && a1 * 100 + a0 <= c * 100)
        printf("1");
    else
        printf("0");
}