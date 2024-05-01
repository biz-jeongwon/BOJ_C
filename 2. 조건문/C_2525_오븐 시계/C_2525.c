#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    printf("%d %d", (A + ((B + C) / 60)) % 24, (B + C) % 60);
}