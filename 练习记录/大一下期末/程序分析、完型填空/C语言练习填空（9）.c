#include <stdio.h>

int main()
{
	int i, j, m , n;
	i = 8;
	j = 10;
	m = ++i;
	n = j++;
	
	printf("%d %d %d %d", i, j, m, n);
	
	return 0;
}
// 输出： 9 11 9 10
// 分析：主要就是区别前置++和后置++的区别，已经说过几次，不再重复 
