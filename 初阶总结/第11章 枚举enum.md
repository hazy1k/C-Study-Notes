# 第十一章 枚举enum

枚举是 C 语言中的一种基本数据类型，用于定义一组具有离散值的常量，它可以让数据更简洁，更易读。

枚举类型通常用于为程序中的一组相关的常量取名字，以便于程序的可读性和维护性。

## 11.1 枚类型

枚举类型通常用于为程序中的一组相关的常量取名字，以便于程序的可读性和维护性。

定义一个枚举类型，需要使用 enum 关键字，后面跟着枚举类型的名称，以及用大括号 {} 括起来的一组枚举常量。每个枚举常量可以用一个标识符来表示，也可以为它们指定一个整数值，如果没有指定，那么默认从 0 开始递增。

枚举语法定义格式为：

```c
enum　枚举名　{枚举元素1,枚举元素2,……};
```

接下来我们举个例子，比如：一星期有 7 天，如果不用枚举，我们需要使用 #define 来为每个整数定义一个别名：

```c
#define MON  1
#define TUE  2
#define WED  3
#define THU  4
#define FRI  5
#define SAT  6
#define SUN  7
```

用宏定义看起来代码较多，这个时候我们就可以使用枚举的方式

```c
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};
```

这样看起来是不是更简洁了。

注意：第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。

```c
// 可以在定义枚举类型时改变枚举元素的值：
enum season {spring, summer=3, autumn, winter};
// 没有指定值的枚举元素，其值为前一元素加 1。也就说 spring 的值为 0，summer 的值为 3，autumn 的值为 4，winter 的值为 5
```

## 11.2 枚举变量的定义

前面我们只是声明了枚举类型，接下来我们看看如何定义枚举变量。

我们可以通过以下三种方式来定义枚举变量：

1. 先定义枚举类型，再定义枚举变量

```c
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};
enum DAY day;
```

2. 定义枚举类型的同时定义枚举变量

```c
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
```

3. 省略枚举名称，直接定义枚举变量

```c
enum
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
```

下面我们看一个实例：

```c
#include <stdio.h>

enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int main()
{
    enum DAY day;
    day = WED;
    printf("%d",day); // 输出3
    return 0;
}
```

## 11.3 遍历枚举元素

在C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，所以按照 C 语言规范是没有办法遍历枚举类型的。

不过在一些特殊的情况下，枚举类型必须连续是可以实现有条件的遍历。

以下实例使用 for 来遍历枚举的元素：

```c
#include <stdio.h>

enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
}
day;

int main()
{
    // 遍历枚举元素
    for (day = MON; day <= SUN; day++)  
    {
        printf("枚举元素：%d \n", day);
    }
}
```

当枚举元素不连续时，无法遍历，举个例子：

```c
enum
{
    ENUM_0,
    ENUM_10 = 10,
    ENUM_11
};
```

当然枚举也能在switch中使用

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{

    enum color { red=1, green, blue };

    enum  color favorite_color;

    /* 用户输入数字来选择颜色 */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%u", &favorite_color);

    /* 输出结果 */
    switch (favorite_color) // 此时我们如果把red改为1也能实现同样的效果
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你没有选择你喜欢的颜色");
    }

    return 0;
}
```

## 11.4 将整数转换为枚举

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{

    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 1;
    enum day weekend;
    weekend = ( enum day ) a;  // 强制类型转换
    //weekend = a; //错误
    printf("weekend: %d", weekend); // 输出1
    return 0;
}
```
