#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int stack[MAX] = {0, };
int topNum = -1;

void push(int num)
{
    stack[++topNum] = num;
}

void pop()
{
    if (topNum == -1)
        printf("-1\n");
    else
    {
        printf("%d\n", stack[topNum]);

        stack[topNum--] = '\0';
    }
}

void size()
{
    printf("%d\n", topNum + 1);
}

void empty()
{
    if (topNum == -1)
        printf("1\n");
    else
        printf("0\n");
}

void top()
{
    if (topNum == -1)
        printf("-1\n");
    else
        printf("%d\n", stack[topNum]);
}


int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char cmd[6] = {0, };

        scanf("%s", cmd);

        switch(cmd[0])
        {
            case 'p':
            {
                if (cmd[1] == 'u')
                {
                    int num;

                    scanf("%d", &num);

                    push(num);
                }
                else
                    pop();
                
                break;
            }
            case 's':
            {
                size();

                break;
            }
            case 'e':
            {
                empty();

                break;
            }
            case 't':
            {
                top();

                break;
            }
        }
    }
}