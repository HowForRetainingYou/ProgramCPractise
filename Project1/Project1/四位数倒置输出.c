#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d%d%d%d", n % 1000 % 100 % 10, n % 1000 % 100 / 10, n % 1000 / 100, n / 1000);
	return 0;
}
