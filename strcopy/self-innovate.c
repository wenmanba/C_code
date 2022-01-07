#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strcopy(char* test, char* stc)
{
	while (*stc != '\0')
	{
		*test = *stc;
		stc++;
		test++;
	}
	*test = *stc;
}
int main()
{
	char arr1[] = "kuaini";
	char arr2[] = "beginner";
	my_strcopy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
