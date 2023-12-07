#define _CRT_SECURE_NO_WARNINGS 
#include <Stdio.h>
int main()
{
	//2 3 1从大到小输出
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a,&b,&c);
	if ( a<b )
	{
		int	tmp = a;
		a =b ;
		b = tmp;
	}
	 if (a< c)
	{
		int tmp = a;
		a = c;
		c = tmp;
		
			
	}
	if (b < c)
	{
		int tmp = b;
		 b= c;
		c = tmp;
	}
	printf("%d,%d,%d\n", a, b, c);
  	return 0;
}