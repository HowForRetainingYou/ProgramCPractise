#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
//int main()
//{
//	int a = -10;
//	//a为整型变量，为4个字节，32bit
//	//原码1（1表示负数，0表示正数）00000000000000000000000000001010
//	//反码11111111111111111111111111110101
//	//补码11111111111111111111111111110110  补码为反码+1
//	//负整数原码反码补码一致，原码反码补码的存在只体现在负整数
//}
/*
&按位 <与>：  存在于二进制，用补码进行动作，对比位有零则为零，全一就是一
|按位 <或>：  存在于二进制，用补码进行动作，对比位有一则为一，有零则为零
^按位 <异或>：存在于二进制，用补码进行动作，相同为零，相异为1
~按位 <取反>：存在于二进制，用补码进行动作，全部取反包括符号位
以上四个操作符只能作用于整数
*/

//11111111111111111111111111110001         -15 a
//00000000000000000000000000000101         5   b
//11111111111111111111111111110100         a=a^b
//11111111111111111111111111110001         b=a^b  
//00000000000000000000000000000101         a=a^b;
//
//
//

/*int main()
{
	int a = -15;
	int b = 5;
	scanf("%d %d", &a, &b);
	printf("Before:a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After:a=%d,b=%d\n", a, b);
}
*/
/*
int main()
{
	int x = 0;
	scanf("%d", &x);
	int a = 1;
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (x & (a << i))
			count++;
	}
	printf("%d的32位二进制表示中1的个数为：%d", x, count);
}

*/


//int main()
//{
//	int x = 0; int y = 0;
//	scanf("%d %d", &x,&y);
//	int t = x ^ y;
//	int a = 1;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (t & (a << i))
//			count++;
//	}
//	printf("%d与%d的32位二进制不同的bit位个数为：%d", x,y, count);
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int arr1[] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = i+1; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				int tmp = 0;
//				tmp = arr[i+1];
//				arr[i + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (int k = 0; k < sz; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	printf("\n");
//	int l = 0;
//	while (l < sz)
//	{
//		if (arr[l] != arr[l + 1])
//		{
//			printf("只有%d出现一次 ", arr[l]);
//			break;
//		}
//		l = l + 2;
//	}
//}


int main()
{
	printf("%d", sizeof(unsigned long));
	*(pulPtr + 3) = *(pulPtr + 3)+3;
}