# 第五章 C的存储类

    存储类定义C程序中变量/函数的存储位置、生命周期和作用域。
    存储类有以下几种：

1. auto：局部变量，自动分配内存，生命周期与变量所在的作用域相同。

2. static：静态变量，全局变量，只初始化一次，生命周期持续到程序结束。

3. register：寄存器变量，临时变量，存放在CPU的寄存器中，生命周期与变量所在的作用域相同。

4. extern：外部变量，声明在其他文件中，可以被其他文件引用。

## 5.1 auto存储类

     auto存储类是所有局部变量默认的存储类
    这意味着它们在函数开始时被创建，在函数结束时被销毁。
    例如：

```c
{
    int month;
    auto int month;
}
```

    上面的实例定义了两个带有相同存储类的变量，auto 只能用在函数内，即 auto 只能修饰局部变量。

## 5.2 register存储类

    register存储类用于定义在寄存器中而不是RAW中的局部变量
    它只能用于存储少量临时变量，而且不能被初始化。

```c
{
    register int miles;
}
```

     寄存器只用于需要快速访问的变量，比如计算器

## 5.3 static存储类

     static存储类用于定义全局变量和静态局部变量

     全局变量在程序开始时被创建，在程序结束时被销毁。

    静态局部变量在第一次被访问时被创建，在程序结束时被销毁。

    静态局部变量的作用域是整个函数，而不是局部作用域。

    以下实例演示了static修饰全局变和局部变量的应用：

```c
#include <stdio.h>

// 函数声明
void func1();

static int count = 10;  //全局变量

int main()
{
    while (count--)
    {
        func1();
    }
    return 0;
}

void func1()
{
    // 'thingy' 是 'func1' 的局部变量-只初始化一次
    // 每次调用函数'func1''thingy'值不会被重置
    static int thingy = 5;
    thingy++;
    printf("thingy 为 %d, count 为 %d\n", thingy, count);
}
```

## 5.4 extern存储类

    extern存储类用于声明在其他文件中定义的变量
    它告诉编译器变量定义在其他地方，因此编译器不会为它分配内存。   
    以下实例演示了extern修饰变量的应用：

```c
// 第一个文件: main.c
#include <stdio.h>

int count;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}
```

```c
// 第二个文件: support.c
#include <stdio.h>

extern int count;

void write_extern()
{
    printf("count 为 %d\n", count);
}
// 编译这两个文件，生成可执行文件，运行可执行文件，输出结果为：
// count 为 5
```




