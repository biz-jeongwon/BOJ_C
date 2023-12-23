#include <stdio.h>

int main()
{
    int N, M, max = -1;

    scanf("%d%d", &N, &M);

    int deck[N];
    
    for (int i = 0; i < N; i++)
        scanf("%d", &deck[i]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == i)
                continue;
            
            for (int k = 0; k < N; k++)
            {
                if (k == i || k == j)
                    continue;
                
                if (deck[i] + deck[j] + deck[k] <= M)
                    if (deck[i] + deck[j] + deck[k] >= max)
                        max = deck[i] + deck[j] + deck[k];
            }
        }
    }

    printf("%d", max);
}