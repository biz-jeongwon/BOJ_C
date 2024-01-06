#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int val;
    int org;
} coord;

int compare(const void* first, const void* second) 
{
	coord* f = (coord *)first;
	coord* s = (coord *)second;

	if (f->val > s->val)
        return 1;
	else if (f->val < s->val)
        return -1;
	else
        return 0;
}

int main() 
{
	int N;

	scanf("%d", &N);

	coord arr[N];

	for (int i = 0; i < N; i++) 
    {
		scanf("%d", &arr[i].val);
		arr[i].org = i;
	}

	qsort(arr, N, sizeof(coord), compare);

	int comp[N], cnt = -1, min = -1000000001;

	for (int i = 0; i < N; i++) 
    {
		if (arr[i].val != min) 
        {
			min = arr[i].val;
			cnt++;
		}

		comp[arr[i].org] = cnt;
	}

	for (int i = 0; i < N; i++) 
		printf("%d ", comp[i]);
}

