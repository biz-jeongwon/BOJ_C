#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char arr[100] = {0, };

    scanf("%s", arr);

    for (int i = 0; i < strlen(arr) / 2; i++)
        if (arr[i] != arr[strlen(arr) - i - 1])
            cnt += 1;

    if (cnt != 0)
        printf("0");
    else
        printf("1");
}