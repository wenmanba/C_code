#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
}