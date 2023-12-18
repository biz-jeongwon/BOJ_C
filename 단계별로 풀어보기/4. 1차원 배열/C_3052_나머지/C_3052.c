#include <stdio.h>

int main()
{
    int N, sum = 0;
    int arr[42] = {0, };

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &N);

        arr[N % 42] = 1;
    }

    for (int i = 0; i < 42; i++)
        if (arr[i] == 1)
            sum += 1;

    printf("%d", sum);
}