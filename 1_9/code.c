#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟strlen函数的代码
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdefg");
//	printf("%d\n", len);
//	return 0;
//}

//模拟strcopy函数的实现
//char* my_strcopy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* test = arr1;
//	//arr1赋值给arr2，包含‘\0’
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return test;
//}
//void main()
//{
//	char arr1[] = "abcdefi";
//	char arr2[] = "dzkj";
//	my_strcopy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟strcat函数的实现
char* my_strcat(char* test,const char* str)
{
	char* ret = test;
	assert(test != NULL);
	assert(str);
	//找到目的字符串的'\0'
	while (*test != '\0')
	{
		*test++;
	}
	//追加
	while (*test++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "ijk";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}