#include <stdio.h>

int main()
{ 
	int x = 10;
	int y = 20; 
	int z = 30;
	
	if(x > y) // Flase
    z = x; // ����䲻��ִ�� 
	x = y;
	y = z;
    
	printf("%d,%d,%d",x,y,z);
	
	return 0;
}
// �����20 30 30 ��������Ѿ������� 
