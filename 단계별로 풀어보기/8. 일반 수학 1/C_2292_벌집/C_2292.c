#include <stdio.h>

int main()
{
    int N, cnt = 1;

    scanf("%d", &N);

    for (int i = 0; ; i++)
    {
        cnt += 6 * i;

        if (N == 1)
        {
            printf("1");
            
            break;
        }
        else if (N > cnt && cnt + 6 * (i + 1) >= N)
        {
            printf("%d", i + 2);

            break;
        }
    }
}