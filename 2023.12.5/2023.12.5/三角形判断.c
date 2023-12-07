#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//        }
//        else if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a = b)
//                printf("Isosceles triangle!\n");
//            else if(a=c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Isosceles triangle!\n");
//
//        }
//        else
//        {
//            printf("Not a triangle!");
//        }
//
//
//
//    }
//    return 0;
//}
//以上有误



int main()
{
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
		if ((a + b) > c && (a + c) > b && (b + c) > a)
		{
			if (a == b&& b == c)//我在想这里能不能用连等判断
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b) && (b != c) || (a == c) && (c != b) || (c == b) && (b != a))
			{
				printf("Isosceles triangle!\n");

			}
			else
			{
				printf("Ordinary triangle!\n");
			}

		}
		else
			printf("Not a triangle!\n");
	return 0;
}