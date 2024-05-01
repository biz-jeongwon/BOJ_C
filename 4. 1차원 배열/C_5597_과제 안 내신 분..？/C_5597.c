#include <stdio.h>

int main()
{
    int N;
    int arr[30] = {0, };

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &N);

        arr[N - 1] = 1;
    }

    for (int i = 0; i < 30; i++)
        if (arr[i] != 1)
            printf("%d\n", i + 1);
}