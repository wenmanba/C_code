#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��Ǯ��ټ�������  
int main()
{
	int i, j, k;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100; j++)
		{
			for (k = 0; k <= 100; k++)
			{
				if ((i * 5 + j * 3 + k / 3 == 100) && (k % 3 == 0) && (i + j + k == 100))
				{
					printf("���� %2d ֻ��ĸ�� %2d ֻ��С��%2dֻ\n", i, j, k);
				}
			}
		}
	}
	return 0;
}