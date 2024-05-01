#include <stdio.h>
#include <math.h>

int main()
{
    int N, dot = 2;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            dot += 1;
        else
            dot += pow(2, i);
    }

    printf("%d", dot * dot);
}