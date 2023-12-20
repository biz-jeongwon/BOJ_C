#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char arr[100] = {0, };

    scanf("%s", arr);    

    for (int i = 0; i < strlen(arr); i++) 
    {
        cnt++;
        
        if (i >= 1 && arr[i] == 'j')
        {
            if (arr[i - 1] == 'l' || arr[i - 1] == 'n')
                cnt--;
        }
        else if (i >= 2 && arr[i] == '=' && arr[i - 1] == 'z' && arr[i - 2] == 'd')
                cnt -= 2;
        else if (arr[i] == '=' || arr[i] == '-')
            cnt--;
    }

    printf("%d", cnt);
}