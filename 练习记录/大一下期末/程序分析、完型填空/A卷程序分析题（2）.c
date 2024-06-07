#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    if(x > y)
        z = x;x = y;y = z;
        
    printf("%d, %d, %d", x , y, z);
}

// 输出结果20 30 30

// 分析如下：
// 首先判断判断语句x > y，由于x = 10， y = 20， 所以该语句为假，z没有被赋值，所以z = 30。
// 然后执行x = y，由于y = 20，所以x = 20。
// 然后执行y = z，由于z = 30，所以y = 30。
// 最后打印x、y、z的值，由于x = 20，y = 30，z = 30，所以输出结果为20 30 30。
