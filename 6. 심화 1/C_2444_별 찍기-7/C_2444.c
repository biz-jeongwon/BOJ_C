#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i < (2 * N) / 2; i++)
    {
        for (int k1 = N - i - 1; k1 > 0; k1--)
            printf(" ");

        for (int k2 = 1; k2 <= 2 * i + 1; k2++)
            printf("*");    
        
        printf("\n");
    }

    for (int i = (2 * N) / 2 - 2; i >= 0; i--)
    {
        for (int k1 = N - i - 1; k1 > 0; k1--)
            printf(" ");

        for (int k2 = 1; k2 <= 2 * i + 1; k2++)
            printf("*");    
        
        printf("\n");
    }
}