#include <stdio.h>

int main()
{
    int dot[3][2] = {0, };

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &dot[i][j]);

    for (int i = 0; i < 2; i++)
    {
        if (dot[0][i] == dot[1][i])
            printf("%d ", dot[2][i]);
        else if (dot[0][i] == dot[2][i])
            printf("%d ", dot[1][i]);
        else
            printf("%d ", dot[0][i]);
    }
}