#include <stdio.h>

int main() 
{
    int N, M;

    scanf("%d%d", &N, &M);

    int arr[N];

    for (int i = 0; i < N; i++)
        arr[i] = i;

    for (int i = 0; i < M; i++)
    {
        int r1, r2;

        scanf("%d%d", &r1, &r2);        
        
        int range = r2 - r1;

        r1--;
        r2--;

        for (int j = 0; j <= range / 2; j++, r1++, r2--)
        {
            int tmp;

            tmp = arr[r1];
            arr[r1] = arr[r2];
            arr[r2] = tmp;
        }
    }

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i] + 1);
}