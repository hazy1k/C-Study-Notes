// for循环求1+2+3+...+10的和
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("1+2+3+...+10的和为：%d\n", sum);
    return 0;
}

// while循环求1+2+3+...+10的和
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while(i <= 10)
    {
        sum += i;
        i++;
    }
    printf("1+2+3+...+10的和为：%d\n", sum);
    return 0;
}