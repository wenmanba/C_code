#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//��һ�ֽⷨ
	/*total = money;
	empty = money;
	while (empty>=2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}*/

	//�ڶ��ֽⷨ
	if (money == 0)
		total == 0;
	else
		total = money * 2 - 1;
	printf("һ���ȵ�%dƿ����\n",total);
	return 0;
}
