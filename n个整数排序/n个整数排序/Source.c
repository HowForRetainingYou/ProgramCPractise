#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int temp;
	int b;
	
	int arr[10] = { 1,5,3,4,6,2,9,8,7,10 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 0; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (b = 0; b < 10; b++)
	{
		printf("%d ", arr[b]);

	}
	printf("\n");
	return 0;
}