#include <stdio.h>

int main()
{
    int mxnum, max = 0;
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
            mxnum = i;
        }
    }

    printf("%d\n%d", max, mxnum + 1);
}