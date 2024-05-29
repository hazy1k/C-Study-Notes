# 第一章 初识C语言

## 练习1.1

![](https://img.picgo.net/2024/05/19/-2024-05-19-19395052d25c4fc56c295c.png)

```c
#include <stdio.h>

int main()
{
    int a = 15;
    int b = 37;
    int c = a - b;
    printf("15减去37的结果是：%d\n", c);

    // 或者可以直接一点：
    printf("15减去37的结果是：%d\n", 15 - 37);

    return 0;
}
```

## 练习1.2

![](https://img.picgo.net/2024/05/20/-2024-05-20-1052040f3dc26f7c767322.png)

```c
#include <stdio.h>
int main()
{
    printf("风\n林\n火\n山\n");
    return 0;
}
```

## 练习1.3

![](https://img.picgo.net/2024/05/20/-2024-05-20-10550530e4185a48ca0147.png)

```c
#include <stdio.h>、
int main()
{
    printf("喂！\n您好！\n\n再见\n");
    return 0;
}
```

## 练习1.4

![](https://img.picgo.net/2024/05/20/-2024-05-20-110049854a1503abae8a42.png)

```c
#include <stdio.h>
int main()
{
    int a; // 先声明一下整数变量a
    printf("请输入一个整数：\n");
    scanf("%d", &a); // 使用scanf函数获取输入的数字
    printf("该整数加上10的结果是：%d\n", a + 10);

    return 0;
}
```

## 练习1.5

![](https://img.picgo.net/2024/05/20/-2024-05-20-1100530887ac4126a05a58.png)

```c
#include <stdio.h>
int main()
{
    int a; // 先声明一下整数变量a
    printf("请输入一个整数：\n");
    scanf("%d", &a); // 使用scanf函数获取输入的数字
    printf("该整数加上10的结果是：%d\n", a - 10);

    return 0;
}
```

## 练习1.6

![](https://img.picgo.net/2024/05/20/-2024-05-20-111134f0f1ecd881b9061a.png)

```c
#include <stdio.h>
int main()
{
    puts("风\n林\n火\n山\n");
}
```

## 练习1.7

![](https://img.picgo.net/2024/05/20/-2024-05-20-111407c7cff18cf05e6f3a.png)

```c
#include <stdio.h>

int main()
{
    int a, b;
    puts("请输入两个整数。");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("整数1: %d\n", a);
    printf("整数2: %d\n", b);
    printf("它们的乘积是: %d\n", a * b);

    return 0;
}
```

## 练习1.8

![](https://img.picgo.net/2024/05/20/-2024-05-20-1123496f12b07f85b96e55.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    puts("请输入三个整数");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("整数1：%d\n", a);
    printf("整数2：%d\n", b);
    printf("整数3：%d\n", c);
    printf("它们的和是：%d\n", a+b+c);

    return 0;
}
```
