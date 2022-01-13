#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断素数
int main()
{/*
	int i = 0;
	int k = 0;
	int j = 0;
	printf("请输入一个数");
	scanf("%d\n", &j);
	k = (int)sqrt((double)j);
	for (i = 2; i <= k; i++)
	{
		if (j%i == 0)
			break;
	}
	if (i > k)
		printf("%d是素数.\n", j);
	else
		printf("%d不是素数\n", j);*/
	int a = 0;
	int num = 0;
	printf("输入一个整数:");
	scanf("%d", num);
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			a++;
		}
	}
	if (a == 0)
	{
		printf("%d是素数\n", num);
	}
	else
	{
		printf("%d不是素数\n", num);
	}
	return 0;
}