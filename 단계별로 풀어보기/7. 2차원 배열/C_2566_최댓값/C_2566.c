#include <stdio.h>

int main()
{
    int memX = 0, memY = 0, max = -1;
    int arr[9][9] = {0, };

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max)
            {
                max = arr[i][j];
                memX = i;
                memY = j;
            }
        }
    
    printf("%d\n%d %d", max, memX + 1, memY + 1);
}