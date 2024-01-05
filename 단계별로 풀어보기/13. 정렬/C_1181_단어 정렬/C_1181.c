#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare (const void* first, const void* second)
{
    char* f = (char *)first;
    char* s = (char *)second;

    if (strlen(f) > strlen(s))
        return 1;
    else if (strlen(f) < strlen(s))
        return -1;
    else
        return strcmp(f, s);
}

int main()
{
    int N;

    scanf("%d", &N);

    char word[N][52];

    for (int i = 0; i < N; i++)
        scanf("%s", word[i]);
    
    qsort(word, N, sizeof(word[0]), compare);

    for (int i = 0; i < N; i++)
    {
        if (strcmp(word[i], word[i + 1]) == 0)
            continue;
        
        printf("%s\n", word[i]);
    }
}