#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�����
int main()
{/*
	int i = 0;
	int k = 0;
	int j = 0;
	printf("������һ����");
	scanf("%d\n", &j);
	k = (int)sqrt((double)j);
	for (i = 2; i <= k; i++)
	{
		if (j%i == 0)
			break;
	}
	if (i > k)
		printf("%d������.\n", j);
	else
		printf("%d��������\n", j);*/
	int a = 0;
	int num = 0;
	printf("����һ������:");
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
		printf("%d������\n", num);
	}
	else
	{
		printf("%d��������\n", num);
	}
	return 0;
}