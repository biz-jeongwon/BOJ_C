#include <stdio.h>

int main()
{
    int N, len;
    int arr[10] = {0, };

    scanf("%d", &N);

    for (len = 0;  ; len++)
    {
        arr[len] = N % 10;

        if (N < 10)
            break;

        N /= 10;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i <= len; i++)
        printf("%d", arr[i]);
}