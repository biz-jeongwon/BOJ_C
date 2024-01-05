#include <stdio.h>

typedef struct
{
    int age;
    char name[102];
} info;


void sort(info arr[], info merge[], int L, int M, int R)
{
    int tmpL = L, tmpM = M + 1, tmpL2 = L;
    
    while (tmpL <= M && tmpM <= R)
    {
        if (arr[tmpL].age <= arr[tmpM].age)
            merge[tmpL2++] = arr[tmpL++];
        else
            merge[tmpL2++] = arr[tmpM++];
    }
    
    if (tmpL > M)
    {
        for (int i = tmpM; i <= R; i++)
            merge[tmpL2++] = arr[i];
    }
    else
    {
        for (int i = tmpL; i <= M; i++)
            merge[tmpL2++] = arr[i];
    }
    
    for (int i = L; i <= R; i++)
        arr[i] = merge[i];
}

void mergeSort(info arr[], info merge[], int L, int R)
{
    if (L < R)
    {
        int M = (L + R) / 2;

        mergeSort(arr, merge, L, M);
        mergeSort(arr, merge, M + 1, R);
        sort(arr, merge, L, M, R);
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    info arr[N], merge[N];

    for (int i = 0; i < N; i++)
        scanf("%d%s", &arr[i].age, arr[i].name);

    mergeSort(arr, merge, 0, N - 1);

    for (int i = 0; i < N; i++)
        printf("%d %s\n", arr[i].age, arr[i].name);
}