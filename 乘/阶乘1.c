#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


	///*int set = 1;
	//int n = 0;
	//int sum = 0;
	//int i = 0;
	//for (n = 1; n <= 10; n++)
	//{
	//	set = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		set = set * i;
	//	}
	//	sum = sum + set;
	//}
	//printf("sum = %d\n", sum);*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<Windows.h>
#include<math.h>
#include<stdlib.h>
int main()
{
		/*int i = 0;
		char password[20] = { 0 };
		for (i = 0; i < 3; i++)
		{
			printf("��������:>");
			scanf("%s", password);
			if (strcmp(password, "123456") == 0)
			{
				printf("��¼�ɹ�\n");
				break;
			}
			else
			{
				printf("�������\n");
			}

			if (i == 3)
			{
				printf("��������������˳�����\n");
				return 0;
			}
		}*/
	/*int a[10];
	int i = 1, n;
	printf("����һ������");
	scanf("%d ", &n);
	while (i < n){
		int j = 1;
		int sum = 0, sizes = 0;
		while (j < i){
			if (i%j == 0)
			{
				sum += j;
				a[++sizes] = j;
			}
			j++;
		}
		if (sum == i){
			printf("%d ", i);
			int k = 0;
			while (k < sizes)
			{
				k++;
				printf("k==sizes%d\n%d", a[k]);
			}
		}i++;
	}*/
	int x, z;
	scanf("%d", &x);
	if (x % 2 == 0){
		for (int i = 2; i < x / 2; i++){
			for (int j = 2; j < sqrt(i); j++){
				if (i%j != 0){
					z = x - i;
					for (int j = 2; j <= sqrt(z); j++){
						if (z%j != 0){
							printf("%d��%d��%d֮��", x, i, z);
						}
					}
				}
			}
		}
	}
}
//4