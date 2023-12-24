#include <stdio.h>

int main()
{
    int M, N;
    char Bchess[8][8] = {0, };
    char Wchess[8][8] = {0, };

    for (int i = 0; i < 8; i++) // Bchess 초기화
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 && j == 0)
                Bchess[i][j] = 'B';
            else
            {
                if (j == 0)
                    Bchess[i][j] = Bchess[i - 1][7];
                else if (Bchess[i][j - 1] == 'B')
                    Bchess[i][j] = 'W';
                else 
                    Bchess[i][j] = 'B';
            }
        }
    }

    for (int i = 0; i < 8; i++) // Wchess 초기화
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 && j == 0)
                Wchess[i][j] = 'W';
            else
            {
                if (j == 0)
                    Wchess[i][j] = Wchess[i - 1][7];
                else if (Wchess[i][j - 1] == 'B')
                    Wchess[i][j] = 'W';
                else 
                    Wchess[i][j] = 'B';
            }
        }
    }
    
    scanf("%d%d\n", &M, &N);

    char sq;
    char MNboard[M][N];

    for (int i = 0; i < M; i++) // MNboard 초기화
    {
        for (int j = 0; j <= N; j++)
        {
            scanf("%c", &sq);

            if (sq == '\n')
                continue;

            MNboard[i][j] = sq;
        }
    }

    for (int i = 0; i < )
    

}       