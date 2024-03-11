#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//??:https://www.nowcoder.com/practice/a9e943b0dab142759807d0cfb6863897?tpId=107&&tqId=33381&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

int main()
{
	int n = 0;
	int m = 0;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}


	int i = 0;
	int j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}

	while (j < m)
	{
		printf("%d ", arr2[j]);
		j++;
	}
	while (i < n)
	{
		printf("%d ", arr1[i]);
		i++;
	}
	return 0;
}