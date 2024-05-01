#include <stdio.h>

int main()
{
    int i;
    char arr[1000] = {0, };

    scanf("%s%d", arr, &i);
    printf("%c", arr[i - 1]);
}