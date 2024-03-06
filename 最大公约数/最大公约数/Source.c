#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//熟悉数学，利用辗转相除法求；
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c=a%b;//a b顺序无关紧要，到后面是进行一样的步骤的；
	
	if (a!=0&&b!=0)
	{
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
	}
	printf("最大公约数是：%d", b);
	return 0;
}

