#include <stdio.h>

int main()
{
	int i;
	for(int i = 0; i < 100; i++)
	{
		if(i % 3 == 0 && i % 10 == 6)
		{
			printf("%d\n", i); 
		}
	}
}
