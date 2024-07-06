// 求三个数中最小数-if嵌套
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // a比b和c都小，则输出a
    if(a < b)
    {
        if(a < c)
        {
            printf("%d\n", a);
        }
    // b比a和c都小，则输出b
    }
    else if(b < a)
    {
        if(b < c)
        {
            printf("%d\n", b);
        }
    // c比a和b都小，则输出c
    }
    else
    {
        if(c < a)
        {
            printf("%d\n", c);
        }
    }
}