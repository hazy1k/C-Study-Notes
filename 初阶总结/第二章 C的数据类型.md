# 第二章 C数据类型

## 2.1 初识数据类型

### 2.1.1 常见数据类型

1. 基本数据类型，如int、char、float、double

2. 枚举类型，如enum、enum class等

3. void类型，表示无类型，通常用于函数返回值

4. 派生类型，如指针、引用、数组、结构体、类等

### 2.1.2 整数类型

1. char类型，表示一个字符，占1个字节，范围-128~127，可以用单引号或双引号表示

2. signed char类型，表示有符号字符，占1个字节，范围-128~127

3. unsigned char类型，表示无符号字符，占1个字节，范围0~255

4. short类型，表示短整数，占2个字节，范围-32768~32767

5. unsigned short类型，表示无符号短整数，占2个字节，范围0~65535

6. int类型，表示整数，占4个字节，范围-2147483648~2147483647

7. long类型，表示长整数，占4个字节或8个字节，取决于系统

8. unsigned long类型，表示无符号长整数，占4个字节或8个字节，取决于系统

9. long long类型，表示长长整数，占8个字节，范围-9223372036854775808~9223372036854775807

### 2.1.3 Sizeof()

    为了得到某个类型或者某个变量的准确大小，可以使用sizeof运算符，如sizeof(int)表示int类型占多少字节。
    请看下面这个例子：

```c
#include <float.h>
#include <stdio.h>
int main()
{
    printf("int 存储大小为 %u 字节\n", sizeof(int)); // 输出int类型占4个字节

    return 0;
}
```

## 2.2 浮点类型

1. float类型，表示单精度浮点数，占4个字节，范围-3.40282347e+38~3.40282347e+38

2. double类型，表示双精度浮点数，占8个字节，范围-1.7976931348623157e+308~1.7976931348623157e+308

3. long double类型，表示长双精度浮点数，占10个字节或12个字节，取决于系统。

    请看下面这个例子:

```c
#include <stdio.h>
#include <float.h>
int main()
{
    printf("float 存储最大字节数 : %d\n", sizeof(float)); // 输出float类型占4个字节
    printf("float 最小值： %E\n", FLT_MIN); // 输出float类型最小值-1.175494351e-038
    printf("float 最大值： %E\n", FLT_MAX); // 输出float类型最大值-3.40282347e+038
    printf("float 精度： %d\n", FLT_DIG); // 输出float类型精度 6
    // E为以科学计数法表示的浮点数
    return 0;
}
```

## 2.3 void 类型

 void类型指定没有可用的值。它常用与以下三种情况下：

1. 函数返回为空，如void exit(int status)

2. 函数参数为空，如void foo(void)

3. 指针指向voide，如void* p = NULL

## 2.4 类型转换

### 2.4.1 隐式类型转换

举例：

```c
int i = 10;
float f = 3.14;
double d = i + f;
ptintf("d = %f\n", d); // 输出d = 13.140000
// 隐式类型转换，将i转换为double类型
```

### 2.4.2 显示类型转换(强制类型转换)

举例：

```c
double d = 3.14159;
int i = (int)d;
printf("i = %d\n", i); // 输出i = 3
```


