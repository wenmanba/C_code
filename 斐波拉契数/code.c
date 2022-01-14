#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
//º∆À„Ï≥≤®¿≠∆ı ˝
long long Fibonacci_r(size_t N)
{
	return N < 2 ? N : Fibonacci_r(N - 1) + Fibonacci_r(N - 2);
}
long long* Fibonacci(size_t N)
{
	long long* fibArray = malloc(sizeof(long long)*(N + 1));
	fibArray[0] = 0;
	if (N == 0)
		return fibArray;

	fibArray[1] = 1;
	for (int i = 2; i <= N; ++i)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}
	return fibArray;
}
int main()
{
	printf("%d\n", Fibonacci(1000));
	return 0;
}