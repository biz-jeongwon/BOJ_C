#include <stdio.h>
#include <string.h>

int main()
{
    int N, cnt = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int alpha[26] = {0, };
        char arr[100] = {0, };

        scanf("%s", arr);

        for (int j = 0; j < strlen(arr); j++)
        {
            if (j > 0 && arr[j] == arr[j - 1])
                continue;
            else if (alpha[arr[j] - 97] == 0)
                alpha[arr[j] - 97]++;
            else
            {
                cnt++;

                break;
            }
        }
    }

    printf("%d", N - cnt);
}