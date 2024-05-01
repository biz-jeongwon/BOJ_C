#include <stdio.h>

int main()
{
    int N, num = 0;

    scanf("%d", &N);

    for (int i = 666; ; i++)
    {
        int tmp = i, cnt = 0;

        while (tmp > 0)
        {
            if (tmp % 10 == 6)
                cnt++;
            else if (tmp % 10 != 6)
                cnt = 0;
            
            if (cnt == 3)
            {
                num++;

                if (num == N)
                {
                    printf("%d", i);

                    return 0;
                }
            }

            tmp /= 10;
        }
    }
}