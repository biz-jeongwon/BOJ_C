#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int C;

        scanf("%d", &C);

        printf("%d ", C / 25);
        C %= 25;
        printf("%d ", C / 10);
        C %= 10;
        printf("%d ", C / 5);
        C %= 5;
        printf("%d\n", C);
    }
}