#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
//题目：https://www.nowcoder.com/practice/83d6afe3018e44539c51265165806ee4?tpId=107&&tqId=33349&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

//我的与博哥的答案本质上是一样的；
//这道题看着虽难虽复杂，但解这道题的核心是找规律；
//在草稿纸上画出题目图案，再标记规律
int main()
{
	int x;
	while (scanf("%d", &x) != EOF)
	{
		for (int i = 1; i < x + 1; i++)
		{
			for (int j = 1; j < x + 1; j++)
			{
				if (j == i || j + i == x + 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			printf("\n");
		}
	}

}

#endif 0

//唐朝版答案；太繁琐
int main3()
{
	int n, X = 0;
	while (scanf("%d", &n) != EOF)
	{
		int N = n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j == n - N + 1 || j == N)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
			N = N - 1;
		}
	}
	return 0;
}