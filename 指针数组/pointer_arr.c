#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[10] = "0";
	char* (*pa)[10] = &arr;


	int arr1[5] = { 0 };
	int* (ps)[5] = &arr1;
}