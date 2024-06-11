// 输出a、b、c三个变量中的最小值
#include <stdio.h>

int main()
{
    int a, b, c, t1, t2;
    scanf("%d %d %d", &a, &b, &c);
    
    t1 = a < b ? a : b;
    t2 = c < t1 ? c : t1;
    
    printf("%d\n", t2); 
}
/*
首先，在main函数中定义了四个整型变量 a, b, c, t1，t2，
并使用scanf函数分别从用户输入中读取三个整数值给a, b, c。
接着，通过t1 = (a < b) ? a : b;的逻辑运算，将a和b中较小的值赋给t1。
然后，通过t2 = (c < t1) ? c : t1;的逻辑运算，将c和t1中较小的值赋给t2。
最后，通过printf函数将t2的值输出。
*/
