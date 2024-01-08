#include <stdio.h>
#include <string.h>
#define MAX 52

int top = -1;
char stack[MAX] = {0, };

void resetStack()
{
    while (top != -1)
        stack[top--] = '\0';
}

void push(char ch)
{
    stack[++top] = ch;
}

void pop()
{
    stack[top--] = '\0';
}

int main()
{
    int T;

    scanf("%d\n", &T);

    for (int i = 0; i < T; i++)
    {
        int cnt = -1;
        char tmp[MAX] = {0, };
        
        gets(tmp);

        for (int j = 0; j < strlen(tmp); j++)
        {
            if (tmp[j] == '(')
                push(tmp[j]);
            else if (tmp[j] == ')' && stack[top] == '(')
                pop();
            else
                cnt++;
        }
        
        if (cnt == -1 && top == -1)
            printf("YES\n");
        else
            printf("NO\n");

        resetStack();
    }
}