#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);//5
	//��ӡ�ϰ벿��
	for (int i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <line - 1 - i; j++)
		{
			printf(" ");
		}
		int k = 0;
		//��ӡ*
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (int i = 0; i < line - 1; i++)
	{
		//��ӡ�ո�
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (int k = 0; k < 2 * (line - i - 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}