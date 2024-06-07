#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%2d%2d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}

// 如果输入12345678
// 输出：46

// 分析如下：
// %2d 读取两个数字，所以a和b分别读取了12和34
// 然后a+b的结果是46，所以输出46
