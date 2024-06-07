// 输入三个整数，输出最大值，要求使用if语句的嵌套来实现
 
#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("请输入三个整数：\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2) 
	{
        if (num1 >= num3) 
		{
            printf("最大值是：%d\n", num1);
        } 
		else 
		{
            printf("最大值是：%d\n", num3);
        }
    } 
	else 
	{
        if (num2 >= num3) 
		{
            printf("最大值是：%d\n", num2);
        } 
		else 
		{
            printf("最大值是：%d\n", num3);
        }
    }

    return 0;
}

