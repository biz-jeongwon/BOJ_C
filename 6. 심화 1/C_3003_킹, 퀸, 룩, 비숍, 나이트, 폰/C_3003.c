#include <stdio.h>

int main()
{
    int arr[6] = {0, };

    for (int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    
    printf("%d %d %d %d %d %d", 1 - arr[0], 1 - arr[1], 2 - arr[2], 2 - arr[3], 2 - arr[4], 8 - arr[5]);
}