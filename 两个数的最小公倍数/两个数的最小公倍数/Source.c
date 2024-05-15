#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n=0;
	int	m=0;
	int temp=0;
	int i = 0;
	printf("Input n and m\n");
	scanf("%d %d", &n, &m);
	temp = n * m;
	if (temp > 0)
	{
		for (i = temp; i>0; i--)
		{
			if (i % n == 0 && i % m == 0)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d", temp);
			}
		}
	}
	if(temp<0)
	
	
	printf("%d %d", n, m);
	return 0;
}