#include <stdio.h>

fun(int x)
{
	static int a = 3;
	a += x;
	return a;
}

int main()
{
	int k = 2;
	int m = 1;
	
	k = fun(k);
	m = fun(m);	
	
	printf("%d %d", k, m);
}
// 输出5 6
// 分析已经在A卷中说过不再赘述 
