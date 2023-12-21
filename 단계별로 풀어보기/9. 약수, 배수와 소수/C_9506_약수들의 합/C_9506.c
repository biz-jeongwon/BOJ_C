#include <stdio.h>

int main()
{
    int len, n;

    while (1)
    {
        scanf("%d", &n);

        int cnt = 0, sum = 0;
        int factor[n];

        if (n == -1)
            break;
        
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factor[cnt] = i;
                sum += i;            
                cnt++;
            }
        }

        if (n == sum - n)
        {
            printf("%d =", n);

            for (int i = 0; factor[i] != n; i++)
            {
                if (factor[i + 1] == n)
                    printf(" %d\n", factor[i]);
                else
                    printf(" %d +", factor[i]);
            }
        }
        else
            printf("%d is NOT perfect.\n", n);
    }
}