// ������������С��-ifǶ��
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // a��b��c��С�������a
    if(a < b)
    {
        if(a < c)
        {
            printf("%d\n", a);
        }
    // b��a��c��С�������b
    }
    else if(b < a)
    {
        if(b < c)
        {
            printf("%d\n", b);
        }
    // c��a��b��С�������c
    }
    else
    {
        if(c < a)
        {
            printf("%d\n", c);
        }
    }
}