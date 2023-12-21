#include <stdio.h>

int main()
{
    int A, B;

    while (1)
    {
        scanf("%d%d", &A, &B);

        if (A == 0 && B == 0)
            break;

        if (A > B && A % B == 0)
            printf("multiple");
        else if (A < B && B % A == 0)
            printf("factor");
        else
            printf("neither");

        printf("\n");
    }
}