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
		else if (i / 10 == 9)//���������if����ô99�������ȥ���Σ���Ϊ����������if����������else if ��ֻ��һ��99
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}