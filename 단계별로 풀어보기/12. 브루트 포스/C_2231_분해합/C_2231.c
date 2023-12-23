#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 2; i < N; i++)
    {
        int bhh = 0, tmp = i;

        while (tmp > 0)
        {
            bhh += tmp % 10;
            tmp /= 10;
        }

        if (N == bhh + i)
        {
            printf("%d", i);

            return 0;
        }
    }

    printf("%d", 0);
}