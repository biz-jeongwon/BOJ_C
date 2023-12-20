#include <stdio.h>

int main()
{
    int N, M;

    scanf("%d%d", &N, &M);

    int arr[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            arr[i][j] = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
            for (int k = 0; k < M; k++)
            {
                int emt;

                scanf("%d", &emt);

                arr[j][k] += emt;
            }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }
}