#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ģ��strlen�����Ĵ���
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

//ģ��strcopy������ʵ��
//char* my_strcopy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* test = arr1;
//	//arr1��ֵ��arr2��������\0��
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


//ģ��strcat������ʵ��
char* my_strcat(char* test,const char* str)
{
	char* ret = test;
	assert(test != NULL);
	assert(str);
	//�ҵ�Ŀ���ַ�����'\0'
	while (*test != '\0')
	{
		*test++;
	}
	//׷��
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