#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("1:实现函数Init() 初始化数组为全0.\n");
	printf("2:实现Print()  打印数组的每个元素.\n");
	printf("3:实现Reverse()  函数完成数组元素的逆置.\n");
}
void init(int arr[])
{
	for (int i = 0; i < 8; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[])
{
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}

}

void reverse(int arr[])
{
	int newarr[8] = { 0 };
	int left = 0;
	int left1 = 0;
	int sz = sizeof(arr) / sizeof(int);
	int sz1 = sizeof(newarr) / sizeof(int);
	int i;
	int j;
	
	
	while (left<=sz)
		{
			newarr[j = left1] = arr[i = sz - 1];
			arr[j = left1] = newarr[i = sz - 1];
			i--;
			j++;
		}

	

}

int main()
{
	int x = 0;
	scanf("%d", x);
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	printf("plese choose:\n");
	switch (x)
	{
	case 1:
		init(arr);
	case 2:
		print(arr);
	case 3:
		reverse(arr);
	default:
		printf("Error! Reinput");
	}
	return 0;
}