#include <stdio.h>

int main()
{
    int cnt = 0;
    char ch, bfch;

    for (int i = 0; ; i++)
    {
        scanf("%c", &ch);

        if (ch == '\n')
            break;
        
        bfch = ch;

        if (i == 0 && ch == ' ')
            continue;
        
        if (ch == ' ')
            cnt++;
    }

    if (bfch != ' ')
        cnt++;

    printf("%d", cnt);
}