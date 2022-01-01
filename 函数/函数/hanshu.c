#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数，素数也称质数，
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//	
//	/*int a = 10;
//	int b = 20;
//	int sum = Max(a, b);
//
//	printf("max=%d\n", sum);*/
//}
//用函数判断1000-2000的闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year闰年
//		if (1 == is_leap_year(year))
//			printf("%d ",year);
//		count++;
//	}
//	printf("1000-2000年的闰年个数%d \n", count);
//	return 0;
//}
//每调用num，num+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//
//}
//三元表达式
//int main()
//{
//	int a = 3;
//	int b = 2;
//	int max = 0;
//	a > b ? (max = a) : (max = b);
//	printf("max=%d\n", max);
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}
//自制strlen函数，查找字符个数 
//int my_strlen(char* str)
//{
//	//计算出字符串的长度
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bittjjjj";
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
int count = 0;
int Facl(int n)
{
	int i = 0;
	int ret = i;
	if (n == 3)
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Facl(n - 1) + Facl(n - 2);
 }
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d\n", &n);
	ret = Facl(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
}
