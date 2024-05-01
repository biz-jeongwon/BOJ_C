#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i * 3 <= N ; i++)
    {
        for (int j = 0; j * 5 <= N; j++)
        {
            if (i * 3 + j * 5 == N)
            {
                printf("%d", i + j);

                return 0;
            }
        }
    }

    printf("-1");
}