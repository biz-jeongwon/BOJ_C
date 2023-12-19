#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100] = {0, };
    int alpha[26] = {0, };

    for (int i = 0; i < 26; i++)
        alpha[i] = -1;
    
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        int turn = (int)arr[i] - 97;

        if (alpha[turn] == -1)
            alpha[turn] = i;
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", alpha[i]);
}