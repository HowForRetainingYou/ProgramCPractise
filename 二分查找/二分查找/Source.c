﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int chazhao(int arr[], int left, int right,int key)
{
	int flag = 0;
	while (left < right)
	{
		int m;
		m = (left + right) / 2;
		if (key < arr[m])
		{
			right = m-1;
		}
		else if (key > arr[m])
		{
			left = m+1;
		}
		else if(key==arr[m])
		{
			return 1;
			break;
		}
		else
		{
			return -1;
			break;
		}
	}
}
int main()
{
	int key=999;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0 1 2 3 4 5 6 7 8 9  -7 
	int left = 0;
	int length = sizeof(arr) / sizeof(int);
	int right = length - 1;//右端元素下标；
	int ret = chazhao(arr, left, right, key);
	if (ret = 1)
	{
		printf("Found it\n" );
	}
	else if (ret = -1)
	{
		printf("Coundn't find it\n");
	}
	return 0;
}
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int t = 0;
	int sz = sizeof(arr) / sizeof(int);
	int left = 0;
	int right = sz - 1;//算出末元素坐标
	int flag = 0;//判断真假
	while (left < right)
	{
		int mid = (left + right) / 2;//算出中间下标

		if (arr[mid] < t)
		{
			left = mid + 1;
		}
		else if (arr[mid] > t)
		{
			right = mid - 1;
		}
		else
		{
			flag = 1;
			printf("已经找到，下标是 %d \n", mid);
			break;
		}
	}
	if (flag == 0)
		printf("没找到");
}
*/


