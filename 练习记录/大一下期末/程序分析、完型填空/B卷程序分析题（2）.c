#include <stdio.h>

int main()
{
	int k = 1;
	switch(k)
	{
		case 1:
			printf("%d", k++);
		case 2:
			printf("%d", k++);
		case 3:
			printf("%d", k++);
		case 4:
			printf("%d", k++);
			break;
		default:
			printf("full!\n");				
	}
}

// ���1234
// �������£�
// ��k����1ʱ�����������һ��case��֧�����1��
// Ȼ������ȱ��break��䣬��������ִ�к�����case��֧���������234��
// ���������һ��break�������ڵ��ĸ�case��֧���棬���������switch��䡣
 
