#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void judge(int x)
{
	if(x>0)
	{
		if (x % 4 == 0 && x % 100 != 0)
		{
			printf("%d是闰年", x);
		}
		else
		{
			printf("%d不是闰年",x);
		}
	}
	
	
}
int main()
{
	int year=0;
	scanf("%d", &year);
	judge(year);
	return 0;
}