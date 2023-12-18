#include <stdio.h>
#define MAX 100

int main()
{
    int N, v, sum = 0;
    int arr[MAX] = {0, };

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &v);

    for (int i = 0; i < N; i++)
        if (arr[i] == v)
            sum += 1;

    printf("%d", sum);
}