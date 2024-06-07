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
	
	printf("%d %d", k , m); 
}

// 输出：5 6

// 分析如下：
// 先定义了一个函数参数为int类型，函数里定义一个静态变量a = 3
// 我们在调用函数fun的时候都会加上a
// fun(k)即3+2 = 5，此时a的值变为5 
// fun(k)即5+1 = 6 
