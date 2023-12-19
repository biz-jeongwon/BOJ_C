#include <stdio.h>

int main()
{
    int A, B, chA, chB;

    scanf("%d%d", &A, &B);

    chA = (A % 100 % 10 * 100) + (A % 100 / 10 * 10) + A / 100;
    chB = (B % 100 % 10 * 100) + (B % 100 / 10 * 10) + B / 100;

    int max = chA > chB ? chA : chB;

    printf("%d", max);
}