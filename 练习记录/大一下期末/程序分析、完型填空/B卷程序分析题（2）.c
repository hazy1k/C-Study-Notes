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

// 输出1234
// 分析如下：
// 当k等于1时，程序会进入第一个case分支并输出1。
// 然后，由于缺少break语句，程序会继续执行后续的case分支，依次输出234。
// 最后，由于有一个break语句出现在第四个case分支后面，程序会跳出switch语句。
 
