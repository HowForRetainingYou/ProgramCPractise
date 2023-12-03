#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a == b)
		{
			printf("%d=%d", a, b);
		}
		else if (a < b)
		{
			printf("%d<%d", a, b);
		}
		else
		{
			printf("%d>%d", a, b);
		}
	}
	return 0;
}


