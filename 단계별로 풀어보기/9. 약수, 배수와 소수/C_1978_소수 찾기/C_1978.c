#include <stdio.h>

int main()
{
    int N, num, cnt = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int judge = 0;

        scanf("%d", &num);    
        
        if (num == 1)
            continue;
        
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
                judge++;
        }

        if (judge == 0)
            cnt++;
    }

    printf("%d", cnt);
}