# **第一章 C的基本语法**

## **1.1 C的令牌（Token）**

    例如：

```c
#include <stdio.h>
int main()
{
    printf("Hello, world!\n");
    return 0;
}
```

     这5个令牌分别是：

```c
printf
(
"Hello, world!\n"
)
;
```

## **1.2 分号**

    在C语言中，每个语句都必须以分号结尾，即使是单行语句。

## **1.3 注释**

    C语言支持单行注释和多行注释。
    单行注释以//开头，多行注释以/*开头，并以*/结尾。

## **1.4 标识符**

    标识符是用来标识变量、函数、结构体、宏、类型等名称的字母、数字和下划线的组合。
    例如：

```c
int age; // 合法的标识符
int _age; // 合法的标识符
int age123; // 合法的标识符
int 1age; // 非法的标识符，数字开头
int age age; // 非法的标识符，多个标识符连在一起
```

## **1.5 关键字**

    下面列出了C中的保留字。这些保留字不能作为常量名、变量名和其他标识符名称

```c
auto break case char const continue default do double else enum 
for goto if int long register return short signed sizeof static struct 
typedef union unsigned void volatile while extern switch float
```


