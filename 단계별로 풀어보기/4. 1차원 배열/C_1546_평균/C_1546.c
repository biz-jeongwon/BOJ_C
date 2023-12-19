#include <stdio.h>

int main()
{
    int N, max = -1;
    double sum = 0;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < N; i++)
        sum += (double)arr[i] / max * 100;

    printf("%.2lf", (double)sum / N);
}