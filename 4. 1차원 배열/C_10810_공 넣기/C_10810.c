#include <stdio.h>
#define MAX 100

int main()
{
    int N, M;

    scanf("%d%d", &N, &M);

    int arr[MAX] = {0, };

    for (int i = 0; i < M; i++)
    {
        int r1, r2, num;

        scanf("%d%d%d", &r1, &r2, &num);

        for (int j = r1 - 1; j <= r2 - 1; j++)
            arr[j] = num;
    }

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
}