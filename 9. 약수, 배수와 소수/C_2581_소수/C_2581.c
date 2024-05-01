#include <stdio.h>

int main()
{
    int M, N, sum = 0, min = 10001;

    scanf("%d%d", &M, &N);

    for (int i = M; i <= N; i++)
    {
        int judge = 0;

        if (i == 1)
            continue;
            
        for (int j = 2; j < i / 2 + 1; j++)
        {
            if (i % j == 0)
                judge++;
        }

        if (judge == 0)
        {
            sum += i;

            if (i < min)
                min = i;
        }

        printf("fuck");
    }

    if (min == 10001)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}