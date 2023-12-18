#include <stdio.h>

int main()
{
    int N;
    long int mx = -1000000;
    long int mn = 1000000;

    scanf("%d", &N);

    long int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &arr[i]);

        if (arr[i] >= mx)
            mx = arr[i];
        
        if (arr[i] <= mn)
            mn = arr[i];
    }

    printf("%ld %ld", mn, mx);
}