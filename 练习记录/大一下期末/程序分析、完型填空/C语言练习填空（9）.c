#include <stdio.h>

int main()
{
	int i, j, m , n;
	i = 8;
	j = 10;
	m = ++i;
	n = j++;
	
	printf("%d %d %d %d", i, j, m, n);
	
	return 0;
}
// ����� 9 11 9 10
// ��������Ҫ��������ǰ��++�ͺ���++�������Ѿ�˵�����Σ������ظ� 
