#include <stdio.h>

int main()
{
	int max, a, b ,c;
	
	int fun(int x, int y); // 函数声明
	
	printf("请输入三个数字：");
	scanf("%d %d %d", &a, &b, &c);
	
	max = fun(fun(a, b), c); // fun函数嵌套调用，先比较a和b再从中大的和c比较
	printf("max = %d", max); 
}

int fun(int x, int y)
{
	return (x > y ? x : y);
}
