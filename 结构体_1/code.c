#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S1
{
	char sex;
	int age;
	char name;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}