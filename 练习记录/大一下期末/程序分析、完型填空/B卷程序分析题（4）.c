#include <stdio.h>
#include <string.h>

char *fun(char *t)
{
	char *p = t;
	return p + strlen(t) / 2;
}
int main()
{
	char *str = "abcdefgh";
	str = fun(str);
	puts(str);
	
}
// 输出：efgh 
// 分析如下：
/* 
这段代码首先定义了一个名为fun的函数，该函数接受一个指向字符串的指针，并返回该字符串中间位置
然后在主函数main中定义了一个指向字符串常量"abcdefgh"的指针str，
并将str传入fun函数中，并将函数返回的指针赋给str。最后通过puts函数输出str指向的字符串。

可以再具体分析下： 
主函数main开始执行，定义了一个指向字符串常量"abcdefgh"的指针str。
将str传入fun函数中，函数内部计算出字符串的长度为8，因此返回str + 8 / 2
即返回指向字符串中间位置的指针，这里是指向字符串中的"e"。
将函数返回的指针赋给str，此时str指向了"e"。
最后，通过puts函数输出str指向的字符串，即输出"efgh"。
*/
