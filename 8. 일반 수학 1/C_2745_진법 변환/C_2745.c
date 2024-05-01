#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N, sum = 0;
    char arr[36] = {0, };

    scanf("%s%d", arr, &N);

    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        if (arr[i] >= 65)
            sum += (arr[i] - 55) * pow(N, strlen(arr) - i - 1);
        else
            sum += (arr[i] - 48) * pow(N, strlen(arr) - i - 1);
    }

    printf("%d", sum);
}