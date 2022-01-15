#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";
//	const char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	void  fun_add(arr ,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void fun_add(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (int j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	char a[] = { 'a','b','c','d','e','f'};
//	printf("%d ", strlen(a));//6
//	printf("%d ", strlen(a+0));//3  4
//	printf("%d ", strlen(*a));//6 1
//	printf("%d ", sizeof(a[1]));//1
//	printf("%d ", sizeof(&a));//6 4
//	printf("%d ", sizeof(&a+1));//1 4
//	printf("%d ", sizeof(&a[0]+1));//1 4
//	/*char  *a[] = { "work", "at","alibaba" };
//	char**pa = a;
//	pa++;
//	
//	/*printf("%s", *pa);*/
//	/*char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);*/
//
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr); abcdef  ---> fedcba
//	gets(arr);//读取一行，空格也能读取
//	reverse(arr);
//	printf("逆序后的字符串: %s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);//3  3
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d \n", sum);
//	return 0;
//}
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
		for (j = 0; j <line-1-i ; j++)
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
		for (int j = 0; j <= i ; j++)
		{
			printf(" ");
		}
		//打印*号
		for (int k = 0; k < 2*(line-i-1)-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}