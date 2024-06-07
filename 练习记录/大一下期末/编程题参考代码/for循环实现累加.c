#include <stdio.h>

int main() 
{
    int a, N, result = 0;

    puts("ÇëÊäÈëNµÄÖµ£º");
    scanf("%d", &N);

    for (a = 1; a <= N; a++) 
	{
        result += a;
    }

    printf("result = %d\n", result);

    return 0;
}

