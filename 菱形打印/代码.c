#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);//5
	//打印上半部分
	for (int i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <line - 1 - i; j++)
		{
			printf(" ");
		}
		int k = 0;
		//打印*
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (int i = 0; i < line - 1; i++)
	{
		//打印空格
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*号
		for (int k = 0; k < 2 * (line - i - 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}