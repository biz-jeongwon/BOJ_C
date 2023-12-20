#include <stdio.h>
#include <string.h>

int main()
{
    int N, B;
    char arr[100] = {0, };

    scanf("%d%d", &N, &B);

    for (int i = 0; N != 0; i++)
    {
        if (N % B <= 9)
            arr[i] = N % B + 48;
        else
            arr[i] = N % B + 55;

        N /= B;
    }

    for (int i = strlen(arr) - 1; i >= 0; i--)
        printf("%c", arr[i]);
}