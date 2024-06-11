#include <stdio.h>

int main()
{ 
	int x = 10;
	int y = 20; 
	int z = 30;
	
	if(x > y) // Flase
    z = x; // 该语句不会执行 
	x = y;
	y = z;
    
	printf("%d,%d,%d",x,y,z);
	
	return 0;
}
// 输出：20 30 30 这个我们已经分析过 
