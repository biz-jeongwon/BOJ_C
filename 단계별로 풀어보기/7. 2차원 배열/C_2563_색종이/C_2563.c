#include <stdio.h>

int main()
{
    int N, area = 0;
    int arr[100][100] = {0, };

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int row, col;

        scanf("%d%d", &row, &col);

        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                arr[j + row][k + col] = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
                area++;
        }
    }    

    printf("%d", area);
}