#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		else if (i / 10 == 9)//这里如果用if，那么99将被算进去两次，因为都符合两个if的条件。用else if 则只用一次99
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}