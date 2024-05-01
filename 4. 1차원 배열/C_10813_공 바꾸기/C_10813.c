#include <stdio.h>
#define MAX 100

int main()
{
    int N, M;

    scanf("%d%d", &N, &M);

    int arr[MAX] = {0, };

    for(int i = 0; i < N; i++)
        arr[i] = i + 1;
    
    for (int i = 0; i < M; i++)
    {
        int b1, b2, tmp;

        scanf("%d%d", &b1, &b2);
        
        tmp = arr[b1 - 1];
        arr[b1 - 1] = arr[b2 - 1];
        arr[b2 - 1] = tmp;        
    }

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
}