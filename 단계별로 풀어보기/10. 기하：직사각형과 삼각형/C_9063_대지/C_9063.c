#include <stdio.h>

int main()
{
    int N, maxX = -10001, minX = 10001, maxY = -10001, minY = 10001;

    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        int x, y;

        scanf("%d%d", &x, &y);

        if (x >= maxX)
            maxX = x;
        
        if (x <= minX)
            minX = x;

        if (y >= maxY)
            maxY = y;
        
        if (y <= minY)
            minY = y;
    }

    printf("%d", (maxX - minX) * (maxY - minY));
}