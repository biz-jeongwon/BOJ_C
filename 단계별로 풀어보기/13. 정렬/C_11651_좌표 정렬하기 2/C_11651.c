#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} dot;

int compare (const void* first, const void* second)
{   
    dot* f = (dot *)first;
    dot* s = (dot *)second;

    if (f->y > s->y)
        return 1;
    else if (f->y == s->y)
    {
        if (f->x > s->x)
            return 1;
        else
            return -1;
    }

    return -1;
}

int main()
{
    int N;

    scanf("%d", &N);

    dot arr[N];

    for (int i = 0; i < N; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);

    qsort(arr, N, sizeof(dot), compare);

    for (int i = 0; i < N; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
}
