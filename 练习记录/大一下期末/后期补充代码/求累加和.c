// forѭ����1+2+3+...+10�ĺ�
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("1+2+3+...+10�ĺ�Ϊ��%d\n", sum);
    return 0;
}

// whileѭ����1+2+3+...+10�ĺ�
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while(i <= 10)
    {
        sum += i;
        i++;
    }
    printf("1+2+3+...+10�ĺ�Ϊ��%d\n", sum);
    return 0;
}