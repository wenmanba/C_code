#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S{
	char a;
	int b;
	double c;
};
void Init(struct S* ps)
{
	ps->a = 'wen';
	ps->b = 100;
	ps->c = 3.14;
}
//结构体传参
void Print(struct S tmp)
{
	printf("%c %d %lf\n", tmp.a, tmp.b, tmp.c);
}
//结构体传址
void Print1(const struct S* pss)
{
	printf("%c %d %lf\n", pss->a, pss->b, pss->c);
}
int main()
{
	struct S s1 = { 0 };
	Init(&s1);
	Print(s1);
	Print1(&s1);
	return 0;
}