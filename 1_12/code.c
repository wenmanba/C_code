#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ë®ÏÉ»¨Êý


int main()
{
	int i, j, k ,n= 0;
	for (i = 100; i < 1000; i++)
	{
		j = i % 10;
		k = i / 10 % 10;
		n = i / 100;
		if (j*j*j + k*k*k + n*n*n ==i)
		{
			printf("%4d\n", i);
		}
	}
	return 0;
}