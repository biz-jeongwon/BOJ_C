#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0;
    char arr[15] = {0, };

    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'S')
            sum += 8;
        else if (arr[i] == 'V')
            sum += 9;
        else if (arr[i] == 'Y' || arr[i] == 'Z')
            sum += 10;
        else
            sum += (arr[i] - 65) / 3 + 3;
    }
        

    printf("%d", sum);
}