// 用递归法计算n！其中n是由用户输入的一个自然数
#include <stdio.h>

// 首先让我们写一个递归函数 
int factorial(int n) 
{
    if (n == 0)  // 先判断输入的是不是0，则返回1.因为0的阶乘就是1 
	{
        return 1;
    } 
	else // 计算阶乘
	/*
	这时候就轮到递归登场了-所谓递归就是函数不断调用自己
	我们的代码就是递归
	比如输入3，那么计算过程就是3 * 递归函数（3 - 1）此时就是3 * 2了，但是我们还得调用直到n=0
	那么就是3 * 2 * 1,函数每调用自己一次，返回乘的就减1 
	那么这个函数就是n * (n-1) * (n-2) *..... 
	*/ 
	{
        return n * factorial(n - 1);
    }
}

int main() 
{
    int n;
    printf("请输入一个数:");
    scanf("%d", &n);
    
    // 调用阶乘函数 
    int result = factorial(n);
    printf("%d 的阶乘是 %d\n", n, result);
    
    return 0;
}

