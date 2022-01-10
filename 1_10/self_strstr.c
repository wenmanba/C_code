#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if ((*s2 == '\0') || (*s1 == '\0'))
		{
			return cur;//找到子串
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char *p1 = "aabbbbche";
	char *p2 = "bbc";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}