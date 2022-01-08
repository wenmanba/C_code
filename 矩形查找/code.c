//题目名称：杨氏矩阵
//题目内容：有一个数字矩阵，矩阵的每行从左到右是递增的。矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FindNum(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y); 
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}