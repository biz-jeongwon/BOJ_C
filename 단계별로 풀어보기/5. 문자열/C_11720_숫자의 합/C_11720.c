#include <stdio.h>

int main()
{
    int N, sum = 0;
    char arr[100] = {0, };

    scanf("%d%s", &N, arr);

    for (int i = 0; i < N; i++)
        sum += arr[i] - 48;

    printf("%d", sum);    
}