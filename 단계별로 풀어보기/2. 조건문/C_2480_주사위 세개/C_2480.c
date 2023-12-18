#include <stdio.h>

int max(int a, int b){return (a > b) ? a : b;}

int main()
{
    int d1, d2, d3;

    scanf("%d%d%d", &d1, &d2, &d3);

    if (d1 == d2 && d2 == d3)
        printf("%d", 10000 + d1 * 1000);
    else if (d1 == d2 || d2 == d3)
        printf("%d", 1000 + d2 * 100);
    else if (d1 == d3)
        printf("%d", 1000 + d1 * 100);
    else
        printf("%d", (max(max(d1, d2), d3))*100);
}