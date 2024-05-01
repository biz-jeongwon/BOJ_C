#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int R;
        char arr[20] = {0, };

        scanf("%d%s", &R, arr);

        for (int j = 0; j < strlen(arr); j++)
        {
            for (int k = 0; k < R; k++)
                printf("%c", arr[j]);
        }

        printf("\n");
    }
}