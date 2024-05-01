#include <stdio.h>

int main()
{
    int arr[5] = {0, };

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 4; i++) // bubble sort asc
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("%d\n%d", (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5, arr[2]);
}