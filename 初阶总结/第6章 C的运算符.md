# 第六章 C的运算符

## 6.1 算术运算符

```c
+ 把两个操作数相加
- 从第一个操作数中减去第二个操作数
* 把两个操作数相乘
/ 分子除以分母
% 取模运算符，返回除法的余数
++ 递增运算符，将变量的值加1
 -- 递减运算符，将变量的值减1
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    int a = 21; int b = 10; int c;

    c = a + b; // 21 + 10 = 31
    printf("Line 1 - Value of c is %d \n", c);

    c = a - b; // 21 - 10 = 11
    printf("Line 2 - Value of c is %d \n", c);

    c = a * b; // 21 * 10 = 210
    printf("Line 3 - Value of c is %d \n", c);

    c = a / b; // 21 / 10 = 2
    printf("Line 4 - Value of c is %d \n", c);

    c = a % b; // 21 % 10 = 1
    printf("Line 5 - Value of c is %d \n", c);

    a++; // 递增运算符
    printf("Line 6 - Value of a is %d \n", a);

    b--; // 递减运算符
    printf("Line 7 - Value of b is %d \n", b);

    return 0;
}
```

## 6.2 关系运算符

```c
== 检查两个操作数的值是否相等
!= 检查两个操作数的值是否不相等
> 检查左边的操作数是否大于右边的操作数
< 检查左边的操作数是否小于右边的操作数
>= 检查左边的操作数是否大于或等于右边的操作数
<= 检查左边的操作数是否小于或等于右边的操作数
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    int a = 21; int b = 10; int c;

    if( a == b ) // false
        printf("Line 1 - a is not equal to b \n");
    else
        printf("Line 1 - a is equal to b \n");

    if( a != b ) // true
        printf("Line 2 - a is not equal to b \n");
    else
        printf("Line 2 - a is equal to b \n");

    if( a  > b ) // true
        printf("Line 3 - a is greater than b \n");
    else
        printf("Line 3 - a is not greater than b \n");

    if( a  < b ) // false
        printf("Line 4 - a is less than b \n");
    else
        printf("Line 4 - a is not less than b \n");

    // 改变一下a和b的值
    a = 25; b = 20;

    if( a  >= b ) // true
        printf("Line 5 - a is greater than or equal to b \n");
    else
        printf("Line 5 - a is not greater than or equal to b \n");

    if( a  <= b ) // false
        printf("Line 6 - a is less than or equal to b \n");
    else
        printf("Line 6 - a is not less than or equal to b \n");

}
```

## 6.3 逻辑运算符

```c
&& 称为逻辑与运算符，只有两个操作数都为真，结果才为真。
|| 称为逻辑或运算符，只要两个操作数有一个为真，结果就为真。
! 称为逻辑非运算符，它是一个单目运算符，用来反转操作数的逻辑值。
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    int a = 20; int b = 10; int c;

    if( a && b ) // true
        printf("Line 1 - a and b are true \n");
    if( a || b ) // true
        printf("Line 2 - a or b is true \n");
    if( !a ) // false
        printf("Line 3 - a is not true \n");
    // 改变a和b的值
    a = 0; b = 10;
    if( a && b ) // false
        printf("Line 4 - a and b are not true \n");
    if( a || b ) // true
        printf("Line 5 - a or b is true \n");
    if( !(a && b)) // true
        printf("Line 6 - a and b are true \n");
}
```

## 6.4 位运算符

```c
& 称为按位与运算符，它是对两个操作数逐位进行操作，只有对应的位都为1，结果才为1。
| 称为按位或运算符，它是对两个操作数逐位进行操作，只要对应的位有一个为1，结果就为1。
^ 称为按位异或运算符，它是对两个操作数逐位进行操作，只有对应的位不同时为1，结果才为1。
~ 称为按位取反运算符，它是一个单目运算符，对操作数的每一位进行取反操作。
<< 称为左移运算符，它是将第一个操作数的各二进位全部左移若干位，由 << 右边的数字指定了移动的位数，高位丢弃，低位补0。
>> 称为右移运算符，它是将第一个操作数的各二进位全部右移若干位，由 >> 右边的数字指定了移动的位数，低位丢弃，高位补0。
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;

    c = a & b; // 12 = 0000 1100
    printf("Line 1 - Value of c is %d \n", c);
    c = a | b; // 61 = 0011 1101
    printf("Line 2 - Value of c is %d \n", c);
    c = a ^ b; // 49 = 0011 0001
    printf("Line 3 - Value of c is %d \n", c);
    c = ~a; // -61 = 1100 0011
    printf("Line 4 - Value of c is %d \n", c);
    c = a << 2; // 240 = 1111 0000
    printf("Line 5 - Value of c is %d \n", c);
    c = a >> 2; // 15 = 0000 1111
    printf("Line 6 - Value of c is %d \n", c);
}
```

## 6.5 赋值运算符

```c
= 赋值运算符，把右边的值赋给左边的变量。
+= 加等于运算符，把右边的值加到左边的变量上。
-= 减等于运算符，把右边的值减到左边的变量上。
*= 乘等于运算符，把右边的值乘到左边的变量上。
/= 除等于运算符，把右边的值除到左边的变量上。
%= 取模等于运算符，把右边的值取模到左边的变量上。
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    int a= 21;
    int c;

    c = a; // 21
    printf("Line 1 - Value of c is %d \n", c);
    c += a; // 42
    printf("Line 2 - Value of c is %d \n", c);
    c -= a; // 21
    printf("Line 3 - Value of c is %d \n", c);
    c *= a; // 441
    printf("Line 4 - Value of c is %d \n", c);
    c /= a; // 2
    printf("Line 5 - Value of c is %d \n", c);
    c %= a; // 1
    printf("Line 6 - Value of c is %d \n", c);
    a <<= 2; // 84
    printf("Line 7 - Value of a is %d \n", a);
    a >>= 2; // 15
    printf("Line 8 - Value of a is %d \n", a);
}
```

## 6.6 杂项运算符

```c
sizeof 运算符，返回变量或数据类型占用的字节数。
? : 条件运算符，它是一个三元运算符，根据条件表达式的真假来决定执行哪个表达式。
&运算符：返回变量的地址。
*运算符：指针运算符，用来间接访问指针所指向的内存位置。
```

请看下面的实例：

```c
#include <stdio.h>

int main()
{
    int a = 4;
    short b;
    double c;
    int* ptr;

    // sizeof 运算符
    printf("变量a的大小 = %lu\n", sizeof(a) );
    printf("变量b的大小 = %lu\n", sizeof(b) );
    printf("变量c的大小 = %lu\n", sizeof(c) );

    // & 运算符 和 * 运算符
    ptr = &a; // 取地址
    printf("变量a的地址 = %p\n", ptr); // 输出变量a的地址
    printf("*ptr的值 = %d\n", *ptr); // 取值

    // 三元运算符
    a = 10;
    b = (a == 1) ? 20 : 30; // b = 20
    printf("b的值 = %d\n", b); // 输出b的值

    b = (a == 10) ? 20 : 30; // b = 30
    printf("b的值 = %d\n", b); // 输出b的值
}
```

## 6.7 运算符的优先级

可以参考数学运算中的加减乘除

```c
include <stdio.h>

int main()
{
    int a = 10, b = 10, c = 15, d = 5; int e;

    e = a + b * c / d; // (10 + 10 * 15) / 5 = 10
    printf("Line 1 - Value of e is %d \n", e);

    e = (a + b) * c / d; // ((10 + 10) * 15) / 5 = 120
    printf("Line 2 - Value of e is %d \n", e);

    e = a + (b * c) / d; // (10 + (10 * 15)) / 5 = 12
    printf("Line 3 - Value of e is %d \n", e);

    e = a + b * (c / d); // (10 + 10 * (15 / 5)) = 12
    printf("Line 4 - Value of e is %d \n", e);
}
```
