#include <stdio.h>

fun(int x)
{
	static int a = 3;
	a += x;
	return a;
}

int main()
{
	int k = 2;
	int m = 1;
	
	k = fun(k);
	m = fun(m);
	
	printf("%d %d", k , m); 
}

// �����5 6

// �������£�
// �ȶ�����һ����������Ϊint���ͣ������ﶨ��һ����̬����a = 3
// �����ڵ��ú���fun��ʱ�򶼻����a
// fun(k)��3+2 = 5����ʱa��ֵ��Ϊ5 
// fun(k)��5+1 = 6 
