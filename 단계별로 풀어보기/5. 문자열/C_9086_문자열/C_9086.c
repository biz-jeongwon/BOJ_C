#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char arr[1000] = {0, };

        scanf("%s", arr);

        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
    }
}