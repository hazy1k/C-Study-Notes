#include <stdio.h>

int main()
{
	int max, a, b ,c;
	
	int fun(int x, int y); // ��������
	
	printf("�������������֣�");
	scanf("%d %d %d", &a, &b, &c);
	
	max = fun(fun(a, b), c); // fun����Ƕ�׵��ã��ȱȽ�a��b�ٴ��д�ĺ�c�Ƚ�
	printf("max = %d", max); 
}

int fun(int x, int y)
{
	return (x > y ? x : y);
}
