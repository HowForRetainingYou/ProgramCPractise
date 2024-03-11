#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//题目：https://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=
int main()
{
	int x;
	while (scanf("%d", &x) != EOF)
	{
		for (int i = 1; i <= x; i++)
		{

			for (int j=1; j <= x; j++)
			{
				if (i == 1 || i == x)//第一行和最后一行，j只走这个，所以组成边长
				{
					printf("* ");
				}
				else if (j == 1 || j == x)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}