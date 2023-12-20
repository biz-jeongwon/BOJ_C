#include <stdio.h>

int main()
{
    char ch;
    int alpha[26] = {0, };

    while (scanf("%c", &ch) != EOF)
    {
        if (ch >= 97)
            alpha[ch - 97] += 1;
        else
            alpha[ch - 65] += 1;
    }
    
    int max = -1, mem = 0, cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            mem = i;
        }
    }
    
    for (int i = 0; i < 26; i++)
        if (alpha[i] == max)
            cnt++;
    
    if (cnt != 1)
        printf("?");
    else
        printf("%c", mem + 65);
}

