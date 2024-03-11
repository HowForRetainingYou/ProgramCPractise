#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int a[] = { 1,2,3,4 };
	int b[] = { 5,6,7,8 };
	int tem;
	int sz = sizeof(a) / sizeof(int);
	for (int i = 0; i < sz; i++)
	{
		tem = a[i];
		a[i] = b[i];
		b[i] = tem;
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
	for (int n = 0; n < sz; n++)
	{
		
		printf("%d ", b[n]);
	}
	
}