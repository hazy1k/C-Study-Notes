#include <stdio.h>

int isPerfect(int num)
{
	if(num < 2)
	{
		return 0;
	}
	int factors_sum = 1;
	for(int i = 2; i <= num/2; i++)
	{
		if(num % i == 0) // 判断是不是因子
		{
			factors_sum += i;	
		} 
	}
	return factors_sum == num;
}

int main()
{
	int count = 0;
	int line_count = 0;
	
	for(int num = 1; num <= 1000; num++)
	{
		if(isPerfect(num))
		{
			printf("完美数是：%d ", num);
			count++;
			line_count++;
			if(line_count == 5)
			{
				printf("\n");
				line_count = 0;	
			}	
		}	
	}	
}
