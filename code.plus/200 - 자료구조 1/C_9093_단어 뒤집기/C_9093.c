#include <stdio.h>
#include <string.h>
#define MAX 1002

int top = -1;
char stack[22];

void push(int num)
{
    stack[++top] = num;
}

void resetStack()
{
    while (top != -1)
    {
        printf("%c", stack[top]);

        stack[top--] = '\0';
    }
}

int main()
{
    int T;

    scanf("%d\n", &T);

    for (int i = 0; i < T; i++)
    {
        char tmp[MAX] = {0, };

        gets(tmp);

        for (int j = 0; j < strlen(tmp); j++)
        {
            if (tmp[j] == ' ')
            {
                resetStack();

                if (tmp[j] == ' ')
                    printf(" ");
            }
            else
            {
                push(tmp[j]);

                if (tmp[j + 1] == '\0')
                    resetStack();
            }
        }

        printf("\n");
    }
}