#include <stdio.h>
#include <string.h>
#define MAX_STACK 100002
#define MAX_MEM 200002

int stack[MAX_STACK] = {0, }, top = -1, ptr = 0;
char mem[MAX_MEM] = {0, };

int isEmpty()
{
	if (top == -1) return 1;
	else return 0;
}

int peek()
{
	if (isEmpty(top) == 1) return -1;
	else return stack[top];
}

void push(int num)
{
	stack[++top] = num;
}

int pop()
{
	if (isEmpty(top) == 1) return -1;
	else return stack[top--];
}

int main()
{
    int n, cnt = 1, jud = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        int num;

        scanf("%d", &num);

        while (1)
        {
            if (peek() == num)
            {
                mem[ptr++] = '-';

                pop();

                break;
            }
            else if (cnt != MAX_STACK)
            {
                mem[ptr++] = '+';

                push(cnt++);
            }
            else
            {
                jud++;

                break;
            }
        }
    }

    if (jud == 0)
    {
        for (int i = 0; i < strlen(mem); i++)
            printf("%c\n", mem[i]);
    }
    else
        printf("NO");
}