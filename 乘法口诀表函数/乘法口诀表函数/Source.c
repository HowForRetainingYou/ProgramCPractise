#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int A(int x, int y)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	A(x, y);
}
