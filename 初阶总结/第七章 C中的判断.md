# 第七章 C中的判断

## 7.1 if语句

 语法：

```c
if(boolean_expression)
{
    // 如果布尔表达式为真，则执行该代码块
}
```

下面我们看一个实例：

```c
#include <stdio.h>

int main()
{
    int a = 10;
    if(a < 20)
    {
        printf("a is less than 20\n");
    }
    return 0;
}
```

## 7.2 if...else语句

语法：

```c
if(boolean_expression)
{
    // 如果布尔表达式为真，则执行该代码块
}
else
{
    // 如果布尔表达式为假，则执行该代码块
}
```

下面我们看一个实例：

```c
#include <stdio.h>

int main()
{
    int a = 10;
    if(a < 20)
    {
        printf("a小于20\n");
    }
    else
    {
        printf("a不小于20\n");
    }
    return 0;
}
```

## 7.3 if...else if...else语句

语法：

```c
if(boolean_expression1)
{
    // 如果布尔表达式1为真，则执行该代码块
}
else if(boolean_expression2)
{
    // 如果布尔表达式2为真，则执行该代码块
}
...
    else
    {
        // 如果所有布尔表达式都为假，则执行该代码块
    }
```

下面看一个例子：

```c
#include <stdio.h>

int main()
{
    int a = 10;
    if(a < 20)
    {
        printf("a小于20\n");
    }
    else if(a < 15)
    {
        printf("a在10和15之间\n");
    }
    else
    {
        printf("a is greater than or equal to 15\n");
    }
    return 0;
}
```

## 7.4 嵌套if语句

语法：

```c
if(boolean_expression1)
{
    // 如果布尔表达式1为真，则执行该代码块
    if(boolean_expression2)
    {
        // 如果布尔表达式2为真，则执行该代码块
    }
}
```

实例：

```c
#include <stdio.h>

int main()
{
    int a = 100;
    int b = 200;

    // 检查布尔条件
    if(a == 100)
    {
        // 如果a等于100，则执行该代码块
        if(b == 200)
        {
            // 如果b等于200，则执行该代码块
            printf("a and b are equal to 100 and 200\n");
        }
        else
        {
            printf("a is equal to 100 but b is not equal to 200\n");
        }
    }
    printf("a 的准确值是 %d\n", a); // 100
    printf("b 的准确值是 %d\n", b); // 200

    return 0;
}
```

## 7.5 switch语句

语法：

```c
switch(expression)
{
    case constant1:
        // 如果表达式等于常量1，则执行该代码块
        break;
    case constant2:
        // 如果表达式等于常量2，则执行该代码块
        break;
        ...
        default:
        // 如果没有匹配的case，则执行该代码块
        break;
}
```

- switch 后面的表达式的值将会与每个 case 后面的常量值进行比较，直到找到匹配的值或者执行到 default（如果存在）。

- 如果找到匹配的值，将执行相应 case 后面的代码块，然后跳出 switch 语句。

- 如果没有匹配的值，并且有 default，则执行 default 后面的代码块。

- 如果没有匹配的值，并且没有 default，则跳过整个 switch 语句直到结束。

看一个实例：

```c
#include <stdio.h>

int main()
{
    char grade = 'B';

    switch(grade)
    {
        case 'A':
            printf("很棒！");
            break;
        case 'B':
            printf("做得好");
            break;
        case 'C':
            printf("还可以");
            break;
        case 'D':
            printf("及格了");
            break;
        case 'F':
            printf("不及格了");
            break;
        default:
            printf("你好像什么都没学到...");
            break;
    }

    return 0;
}
```

## 7.6 嵌套switch语句

语法：

```c
switch(ch1)
{
    case 'A':
        printf("这个 A 是外部 switch 的一部分" );
        switch(ch2)
        {
            case 'A':
                printf("这个 A 是内部 switch 的一部分" );
                break;
            case 'B': /* 内部 B case 代码 */
        }
        break;
    case 'B': /* 外部 B case 代码 */
}
```

实例：

```c
#include <stdio.h>

int main()
{
    int a = 100;
    int b = 200;

    switch(a)
    {
        case 100:
            printf("这是外部switch的第一部分\n");
            switch(b)
            {
                case 200:
                    printf("这是内部switch的第一部分\n");
                    break;
            }
    }
    printf("a 的准确值是 %d\n", a);
    printf("b 的准确值是 %d\n", b);

    return 0;
}
```


